#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int getLine(char str[], int lim) {
    int i, c;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
        str[i] = c;
    if(c == '\n') {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return i;
}

int main() {
    int len;
    char line[MAXLINE];

    while((len = getLine(line, MAXLINE))) {
        if(len > LIMIT) {
            printf("%s ", line);
        }
    }
    return 0;
}