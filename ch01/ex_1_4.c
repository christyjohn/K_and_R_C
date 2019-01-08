#include <stdio.h>

/* print Celsius-Fahrenheit table
   for fahr = 0, 20, ..., 300; floating point version */
int main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	celsius = lower;
	printf("Celsius    Fahrenheit\n");
	printf("=======    ==========\n");
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32.0;
		printf("%7.0f %13.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	
	return 0;
}