#include<stdio.h>

int main(){
	float r = 2;
	
	float diameter, circumference, area;
	diameter = 2 * r;
	circumference = 2 * 3.14159 * r;
	area = 3.14159 * (r * r);
	
	printf("Radius Is: 2\n");
	printf("Diameter Is: %f\n", diameter);
	printf("Circumference Is: %f\n", circumference);
	printf("Area Is: %f\n", area);
	
	return 0;
}
