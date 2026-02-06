#include<stdio.h>

int main(){
	FILE *fptr;
	int marks;
	char name[100];
	
	printf("Enter Marks: ");
	scanf("%d", &marks);
	getchar();
	printf("Enter Your Name: ");
    fgets(name, sizeof(name), stdin);
	
	fptr = fopen("student.txt", "w");
	fprintf(fptr, "%s", name);
	fprintf(fptr, "%d\n", marks);
	fclose(fptr);
	
	fptr = fopen("student.txt", "r");
	fgets(name, sizeof(name), fptr);
	fscanf(fptr, "%d", &marks);
	fclose(fptr);
	
	printf("Name: %s", name);
	printf("Marks: %d\n", marks);
	if(marks >= 50){
		printf("PASS!");
	}
	else{
		printf("FAIL!");
	}
	
	
	return 0;
}
