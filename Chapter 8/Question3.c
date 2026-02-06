#include<stdio.h>

int main(){
	FILE *fptr;
	
	int a, b;
	printf("Enter First No.: ");
	scanf("%d", &a);
	printf("Enter Second No.: ");
	scanf("%d", &b);
	
	fptr = fopen("numbers.txt", "w");
	fprintf(fptr, "%d\n", a);	
	fprintf(fptr, "%d", b);
	fclose(fptr);

	fptr = fopen("numbers.txt", "r");
	fscanf(fptr ,"%d", a);
	fscanf(fptr, "%d", b);
	fclose(fptr);
	printf("The Sum Is: %d", a+b);
	
	return 0;
}
