#include<stdio.h>

typedef struct library{
	int id;
	char name[100];
	char stuName[100];
	int days;
	int fine;
	char status;
}librar;

int main(){
	librar lib;
	while(1){
		printf("Enter Book ID(-1 To Exit): ");
		scanf("%d", &lib.id);
		if(lib.id == -1){
			break;
		}
		printf("Enter Book Name: ");
		scanf("%s", lib.name);
		printf("Enter Student Name: ");
		scanf("%s", lib.stuName);
		printf("Enter No. Of Days The Book Was Issued: ");
		scanf("%d", &lib.days);
		if(lib.days <= 7){
			lib.fine = 0;
		}
		else{
			lib.fine = (lib.days - 7) * 50;
		}
		printf("Enter Status('I' For Issued Or 'R' For Returned): ");
		scanf(" %c", &lib.status);
		
		printf("\n\n");
		
		printf("Details Entered:\n\n");
		printf("Book ID: %d\n", lib.id);		
		printf("Book Name: %s\n", lib.name);
		printf("Student Name: %s\n", lib.stuName);
		printf("Days Book Was Issued: %d\n", lib.days);
		if(lib.status == 'I' || lib.status == 'i'){
			printf("Status: Issued\n");
		}
		else if(lib.status == 'R' || lib.status == 'r'){
			printf("Status: Returned\n");
		}
		printf("Total Fine: %d\n\n", lib.fine);
	}
	return 0;
}
