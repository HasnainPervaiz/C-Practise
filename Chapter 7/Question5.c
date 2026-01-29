#include<stdio.h>

typedef struct patient{
	int id;
	char name[100];
	int age;
	char disease[100];
	int numberOfDays;
	int charges;
	int total;
} patien;

int main(){
	patien pat;
	while(1){
		printf("\t\t\t\t\t-----(Hospital Patient Record System)-----\n\n");
		printf("Enter Patient ID(-1 To Exit): ");
		scanf("%d", &pat.id);
		if(pat.id == -1){
			break;
		}
		printf("Enter Patient Name: ");
		scanf("%s", pat.name);
		printf("Enter Patient Age: ");
		scanf("%d", &pat.age);
		printf("Enter Disease Name: ");
		scanf("%s", pat.disease);
		printf("Enter Number Of Days Admitted: ");
		scanf("%d", &pat.numberOfDays);
		printf("Enter Daily Charges: ");
		scanf("%d", &pat.charges);
		pat.total = pat.charges * pat.numberOfDays;
		if(pat.numberOfDays > 10){
			pat.total = pat.total - (pat.total * 10/100);
		}
		printf("\n\n");
		
		printf("\t\t\t\t\tPatients Details:\n\n");	
		printf("Patient ID: %d\n", pat.id);
		printf("Patient Name: %s\n", pat.name);
		printf("Age: %d\n", pat.age);
		printf("Disease: %s\n", pat.disease);
		printf("No. Of Days Admitted: %d\n", pat.numberOfDays);
		printf("Daily Charges: %d\n", pat.charges);
		if(pat.numberOfDays > 10){
			printf("Discount Applied: 10%%\n");
		}
		else{
			printf("Discount Applied: None\n");
		}
		printf("Patient Total Charges: %d\n\n", pat.total);
	}
	
	return 0;
}
