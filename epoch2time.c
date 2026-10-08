#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
    // test for number of command line arguments and sign of first
    // command line argument here...
    if (argc != 2){
        fprintf(stderr, "Usage: epoch2time number-of-seconds\n");
        exit(1);
    }
    
    char *str = argv[1];
    if ( *str == '-' ){ //uses int value of char.. need to compare memory address w the int value
        fprintf(stderr, "epoch2time: negative number of seconds\n");
        exit(2);
    }


    // the following attempts to interpret argv[1] as an unsigned int
    unsigned int n = strtoul(argv[1], NULL, 10);
    
    // // useful constants
    const unsigned int SEC_PER_MIN = 60;
    const unsigned int SEC_PER_HOUR = 60 * SEC_PER_MIN;
    const unsigned int HOUR_PER_DAY = 24;

    // // compute clocktime corresponding to timestamp n here...
    unsigned int hours = floor(n/SEC_PER_HOUR);
    unsigned int remainingSeconds = n % SEC_PER_HOUR;
    unsigned int minutes = floor(remainingSeconds / SEC_PER_MIN);
    unsigned int seconds = remainingSeconds % SEC_PER_MIN;
    if ( hours == HOUR_PER_DAY || hours > HOUR_PER_DAY ) {
        hours = hours-HOUR_PER_DAY;
    }
    printf("%d = %02d:%02d:%02d\n:",n,hours, minutes, seconds);
}