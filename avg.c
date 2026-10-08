#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double sum = 0.0;
    if (argc == 1) {
        printf("%d\n", 0);

    }
    else {
       
        for (int i = 0; i < argc; i++) {
            char *str = argv[i];
            double val = atof(str);
            sum += val;
            
        }
        double argcDouble = argc-1;
        double avg = sum/argcDouble;
        printf("%f\n", avg);
        return 0;
    }
    
}