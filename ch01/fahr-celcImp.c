#include <stdio.h>

/* print fahrenheit-Celsius table
   for fahe = 0, 20, ..., 300 */
int main() 
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
    printf("Fahrenheit\t\tCelsius\n");
    printf("----------\t\t-------\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%10.0f\t\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
    return 0;
}
