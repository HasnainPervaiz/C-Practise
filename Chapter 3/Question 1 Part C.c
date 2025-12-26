#include<stdio.h>

int main(){
	int count;
	printf("Enter A Number: ");
	scanf("%d", &count);
	
	if(count > 10){
		printf("Count Is Greater Than 10.");
	}
	else if(count == 10){
		printf("Count Is Equal To 10.");
	}
	else{
		printf("Count Is Smaller Than 10.");
	}
	
	return 0;
}
