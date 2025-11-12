#include <stdio.h>

int main()
{
    int c, tabs = 0, spaces = 0, newlines = 0;

    while((c = getchar()) != EOF) {
        if(c == '\t')
            ++tabs;
        if(c == ' ')
            ++spaces;
        if(c == '\n')
            ++newlines;
    }
        printf("\nNumber of tabs: %d", tabs );
        printf("\nNumber of spaces: %d", spaces );
        printf("\nNumber of newlines: %d", newlines,     '\n');

        return 0;
}