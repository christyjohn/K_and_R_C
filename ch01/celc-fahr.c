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

	celsius = lower;
    printf("Celsius\t\tFahrenheit\n");
    printf("-------\t\t----------\n");
	while (celsius <= upper) {
        fahr = (9.0 * celsius) / 5.0 + 32;
		printf("%7.0f\t\t%10.1f\n", celsius, fahr);
		celsius  = celsius + step;
	}
    return 0;
}
