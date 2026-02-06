#include<stdio.h>

int main(){
	FILE *fptr;
	int marks[3];
	int i, total = 0;
	float per;
	char name[100];
	printf("Enter Your Name: ");
	fgets(name, sizeof(name), stdin);
	for(i = 0; i < 3; i++){
		printf("Enter Marks For Subject %d: ", i+1);
		scanf("%d", &marks[i]);
		if(marks[i] > 100 || marks[i] < 0){
			printf("Marks Should Be Between 0-100. Try Again!\n");
			i--;
		}
	}
	
	fptr = fopen("result.txt", "w");
	fprintf(fptr, "%s", name);
	for(i = 0; i < 3; i++){
		fprintf(fptr, "%d ", marks[i]);		
	}
	fclose(fptr);
	
	fptr = fopen("result.txt", "r");
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
	printf("Total Marks: %d\n", total);
	per = (total/300.00) * 100;
	printf("Percantage: %.2f\n", per);
	if(per >= 95){
		printf("Grade: A+");
	}
	else if(per >= 80){
		printf("Grade: A");
	}
	else if(per >= 70){
		printf("Grade: B");
	}
	else if(per >= 60){
		printf("Grade: C");
	}
	else if(per >= 50){
		printf("Grade: D");
	}
	else{
		printf("Grade: F");
	}
	
	return 0;
}
