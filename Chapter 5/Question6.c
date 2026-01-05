#include<stdio.h>

float toCelsius(int temp);
float toFahrenheit(int temperature);

int main(){
	float cel, fah;
	int i, j;
	
	printf("Celsius \tFahrenheit\n");
	
	for(i = 1; i <= 100; i++){
		printf("%d \t\t %.2f\n", i, toFahrenheit(i));		
	}
	
	printf("\nFahrenheit \t Celsius\n");
	
	for(j = 32; j <= 212; j++){
		printf("%d \t\t %.2f\n", j, toCelsius(j));
	}
	
	return 0;
}

float toCelsius(int temp){
	float celsius;
		celsius = (temp - 32) * 5.0/9.0;
		return celsius;
}

float toFahrenheit(int temperature){
	float fahrenheit;
	fahrenheit = (temperature * 1.8) + 32;
	return fahrenheit;
}
