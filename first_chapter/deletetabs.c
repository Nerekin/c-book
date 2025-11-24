#include <stdio.h>

#define MAXLINE 1000

int getLine(char str[], int lim) {
    int i, c;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        str[i] = c;
    }
    if(c == '\n') {
        str[i] = c; 
        ++i;
    }
    str[i] = '\0';
    return i;
}

int main() {
    char line[MAXLINE];
    int len, i;

    while((len = getLine(line, MAXLINE))) {
        i = len - 2;

        while(i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
            --i;
        }
        if(i >= 0) {
            line[i + 1] = '\n';
            line[i + 2] = '\0';
            printf("%s", line);
        }
    }
    return 0;
}