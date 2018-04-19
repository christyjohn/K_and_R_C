#include <stdio.h>

int main()
{
    int c, nl, blank, tab;
    nl = blank = tab = 0;

    while ((c = getchar()) != EOF) {
        if(c == '\n')
            ++nl;
        else if (c == ' ')
            ++blank;
        else if (c == '\t')
            ++tab;
    }

    printf("NL: %d, Blank: %d, Tab: %d", nl, blank, tab);

    return 0;
}
