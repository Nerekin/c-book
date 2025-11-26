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

void reverse(char str[], int length) {
    int i = 0,j = length - 1;
    char temp;

    while(i < j) {
        if(str[j] == '\n'){
            j--;
        }
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++, j--;
    } 
}

int main() {
    char line[MAXLINE];
    int len, i;

    while((len = getLine(line, MAXLINE))) {
        reverse(line, len);
        printf("%s\n", line);
    }
    return 0;
}