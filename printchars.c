#include <stdio.h>

void printchars(const char s[]) {
    // complete this function here...
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        printf("% 4d %c\n", i, s[i]);
    }
}

int main(int argc, char *argv[]) {
    // assumes one command-line argument
    char *s = argv[1];
    printchars(s);
    return 0;
}