#include <stdio.h>
/* Imprimir los valores del 0 al 300 (de 20 en 20) y convertirlos a Fahrenheit*/
/*Formula: °C = (5/9)(°F-32)*/
int main(){
	int lower = 0, upper = 300, step = 20;
	int fahr = lower;
	int celsius;

	while(fahr <= upper){
		celsius = 5 * (fahr - 32) /9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;	
	}
	return 0;
}
