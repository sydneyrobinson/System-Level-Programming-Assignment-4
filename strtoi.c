#include <stdbool.h>
#include "strtoi.h"

int chartoi(char c) {
    int i = c - '0';
    if (i < 0 || i > 9) {   
        return -1;
    }
    return i;
}

int strtoi(const char s[]) {
    //valid string may begin with +, -, or a digit.
    if (s[0] == '-' || s[0]== '+' || chartoi(s[0]) != -1){
        int length = 0;
        while (s[length] != '\0') { 
            length++;
        }

        int resultInt = 0;
        int sign = 1;
        int start = 0;

        //sign hand;ing
        if (s[0]=='-'){
            sign = -1;
            start = 1;
        }
        else if (s[0]=='+'){
            start = 1;
        }
        //read characters from the string until a non-digit character is found, or the end of the string is found
        for (int i = start; i < length; i++){
            if (chartoi(s[i]) == -1){ //checking for invalid characters
                break;
            }
            
            int digit = s[i] - '0'; //convert char digit to integer: subtract ASCII valye of '0'
            resultInt = resultInt*10 + digit;
        } 

        resultInt = resultInt*sign;
        return resultInt;
    }
    
    else {
        return 0;
    }
}

