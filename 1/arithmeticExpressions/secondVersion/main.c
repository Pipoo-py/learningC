#include <stdio.h>

/* Desarrollar el mismo programa, pero usando el tipo de dato float para mejor presición en los cálculos*/
int main(){
	float lower = 0.0, upper = 300.0, step = 20.0;
	float fahr = lower;
	float celsius;
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
