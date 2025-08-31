#include<stdio.h>

int main(){
	int number = 0;
	int a;
	printf("Enter A Number: ");
	scanf("%d", &a);
	
	if(a != 7){
		printf("Number Is Not Equal To 7.\n");
	}
	
	printf("This is a C program.\n");
	printf("This is a C \nprogram. \n");
	printf("This \nis \na \nC \nprogram.\n");
	printf("This \tis \ta \tC \tprogram.");
	
	return 0;
}
