#include<stdio.h>

int main(){
	FILE *fptr;
	int marks[3];
	int i, total;
	char name[100];
	printf("Enter Marks For 3 Subjects:\n");
	for(i = 0; i < 3; i++){
		printf("Enter Marks For Subject %d: ", i + 1);
		scanf("%d", &marks[i]);
	}
	getchar();
	printf("Enter Your Name: ");
	fgets(name, sizeof(name), stdin);
	
	fptr = fopen("marks.txt", "w");
	fprintf(fptr, "%s", name);
	for(i = 0; i < 3; i++){
		fprintf(fptr, "%d ", marks[i]);		
	}
	fclose(fptr);
	fptr = fopen("marks.txt", "r");
	fgets(name, sizeof(name), fptr);
	for(i = 0; i < 3; i++){
		fscanf(fptr, "%d", &marks[i]);
	}
	fclose(fptr);
	
	printf("Name: %s", name);
	for(i = 0; i < 3; i++){
		printf("Marks Of Subject %d Are: %d", i+1, marks[i]);
		printf("\n");
	}
	total = marks[0] + marks[1] + marks[2];
	printf("Total Marks: %d", total);
		
	return 0;
}
