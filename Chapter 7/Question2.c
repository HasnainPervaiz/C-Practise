#include<stdio.h>

struct salary_management{
	int id;
	char name[100];
	int salary;
	int HRA;
	int DA;
	int total;
}sal;

int main(){
	int i = 1;
	while(1){
		printf("Enter -1 To Exit.\n");
		printf("Enter Details For Employee %d\n\n", i);
	
		printf("Enter Your ID: ");
		scanf("%d", &sal.id);
		if(sal.id == -1){
			break;
		}
		printf("Enter Your Name: ");
		scanf("%s", sal.name);
		printf("Enter Your Basic Salary: ");
		scanf("%d", &sal.salary);
		printf("Enter Your HRA: ");
		scanf("%d", &sal.HRA);
		printf("Enter Your DA: ");
		scanf("%d", &sal.DA);
		sal.total = sal.salary + sal.HRA + sal.DA;
		
		printf("\n\n");
		
		printf("Employee Details\n\n");
		printf("ID: %d\n", sal.id);
		printf("Name: %s\n", sal.name);
		printf("Total Salary: %d\n\n", sal.total);
		
		i++;
	}	
	
	return 0;
}
