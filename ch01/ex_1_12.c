#include <stdio.h>

/* output one word per line */
int main() {
	int c = 0;
	
	while ( (c = getchar()) != EOF) {
		if ( c  == ' ' || c == '\t' || c == '\n')
			putchar('\n');
		else
			putchar(c);
	}
	
	return 0;
}