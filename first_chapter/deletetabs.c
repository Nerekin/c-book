#include <stdio.h>

#define MAXLINE 1000

int getLine(char str[], int lim) {
    int i, c;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        str[i] = c;
    }
    if(c == '\n') {
        ++i;
        str[i] = c;
    }
    str[i] = '\0';
    return i;
}

int main() {
    char line[MAXLINE];
    int len, i;

    while((len = getLine(line, MAXLINE))) {
        for(i = 0; i < len - 1; ++i) {
            if(line[i] == ' ' && line[i - 1] == ' ') {
            }
            else if(line[i] == '\t' && line[i - 1] == '\t') {
            }
            else {
                    putchar(line[i]);
                }
        } 
        putchar('\n');
    }
    return 0;
}