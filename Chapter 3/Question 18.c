#include<stdio.h>

int main(){
	float radius, diameter, area, circumference;
	printf("Enter Radius Of The Circle: ");
	scanf("%f", &radius);
	
	diameter = radius * 2;
	area = 3.14159 * (radius * radius);
	circumference = 2 * 3.14159 * radius;
	
	printf("Diameter Is: %.2f\n", diameter);
	printf("Area Is: %.2f\n", area);
	printf("Circumference Is: %.2f\n", circumference);
	
	return 0;
}
