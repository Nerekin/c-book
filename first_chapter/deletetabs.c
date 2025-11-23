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

void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

int main() {
    char line[MAXLINE],prev[MAXLINE];
    int len,i;

    while((len = getLine(line, MAXLINE))) {
        for(i = 0; i < len; ++i) {
            prev[i] = line[i] - 1;
            if(line[i] == ' ' && prev[i] == ' ') 
                continue;
            else if(line[i] == '\t' && prev[i] == '\t')
                continue;
            else
                printf("%d", line[i]);
        } 
    }
    return 0;
}