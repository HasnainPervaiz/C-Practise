#include<stdio.h>
#include<math.h>

float rounding_numbers(float number);

int main(){
	float number_input, number_roundedoff;
	while(1){
		printf("Enter A Number Or Enter -1 To Exit The Program: ");
		scanf("%f", &number_input);
		if(number_input == -1){
			break;
		}
		number_roundedoff = rounding_numbers(number_input);
		printf("The Number %f Rounds off To %f", number_input, number_roundedoff);
		printf("\n");
	}
	printf("Thank you so much!!!");
	return 0;
}

float rounding_numbers(float number){
	float number_rounded;
	number_rounded = round(number);
	return number_rounded;
}
