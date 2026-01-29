#include<stdio.h>

typedef struct Bank_Account{
	char name[100];
	int accountNo;
} acc ;

int main(){
	acc acc1 = {"Hasnain", 123};
	
	printf("%d\n", acc1.accountNo);
	printf("%s", acc1.name);
	
	return 0;
}
