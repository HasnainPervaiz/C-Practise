#include<stdio.h>

int main(){
	int num, i, j;
	printf("Enter Only 5 Numbers.");
	for (i = 1; i <= 5; i++){
		printf("Enter A Number(Between 1-30): ");
		scanf("%d", &num);
			if(num > 30 || num < 1){
				printf("Invalid Number. Number Should Be Between 1-30.\n");
				i--;
			}
			else{
				for(j = 1; j <= num; j++){
				printf("*");
				}
			}
			printf("\n");
	}
	
	
	
	return 0;
}
