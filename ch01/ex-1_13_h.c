#include <stdio.h>

#define WORDLENGTH 10

/* print horizontal histogram
 * of the length of
 * the inputs to output
 */
int main() {
    int c, i, j, wordcount;
    wordcount = 0;
    int ndigit[WORDLENGTH];

    for(i = 0; i < WORDLENGTH; i++)
        ndigit[i] = 0;
    
    printf("Enter lines less than 10. Enter CTRl-D to stop\n");

    while((c = getchar()) != EOF) {
        if(c != '\n')
            ++wordcount;
        if(c == '\n') {
            ndigit[wordcount-1] += 1;
            wordcount = 0;
        }
    }

    for(i = 0; i < WORDLENGTH; i++) {
        printf("%d : ", i+1);
        for(j = 0; j < ndigit[i]; j++) {
            putchar('+');
        }
        printf("\n");
    }

    return 0;
}

/*
 * sample output


Enter lines less than 10. Enter CTRl-D to stop
asd
asdasdasd
assda
asdasdasd
asd
aaaa
sadsdda
adasddadada
1 : 
2 : 
3 : ++
4 : +
5 : +
6 : 
7 : +
8 : 
9 : ++
10 : 


*/
