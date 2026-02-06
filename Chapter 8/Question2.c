#include<stdio.h>

int main(){
	FILE *fptr;
	char name[100];
	fptr = fopen("name.txt", "w");
	printf("Enter Your Name: ");
	fgets(name, sizeof(name), stdin);
	fprintf(fptr, "%s", name);
	fclose(fptr);
	printf("\nSaving name to file...\n");
    printf("Name saved successfully.\n\n");
    
	fptr = fopen("name.txt", "r");
    fgets(name, sizeof(name), fptr);
    fclose(fptr);
	
	printf("Hello, %s", name);
	return 0;
}
