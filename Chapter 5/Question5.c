#include<stdio.h>

int isMultiple(int num1, int num2);

int main(){
	int num1, num2, answer;
	printf("Enter Numbers To Check Whether Second No. Is A Multiple Of The First No.\n");
	printf("Enter -1 To Exit The Program.\n");
	printf("Answer Will Be 1 For True And 0 For False.\n\n");
	
	while(1){
		printf("Enter First No.: ");
		scanf("%d", &num1);
		printf("Enter Second No.: ");
		scanf("%d", &num2);
			if(num1 == -1){
				break;
			}
		answer = isMultiple(num1, num2);
		printf("Answer Is: %d\n", answer);
	}
	
	return 0;
}

int isMultiple(int num1, int num2){
	if(num1 % num2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
