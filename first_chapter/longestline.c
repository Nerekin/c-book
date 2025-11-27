#include <stdio.h>

#define MAXLINE 1000
    

int getLine(char str[],int lim) {
    int i, c;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        str[i] = c; 
    if(c == '\n') {
        str[i] = c;
        ++i;
    }
    str[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;

    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}

int main() {
    int max;
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0) 
        if(len > max) {
            max = len;
            copy(longest, line);
        }

    if(max > 0)
        printf("%s", longest);
}