#include<stdio.h>

int main(){
	int num, average, sum, i;
	
	for(i = 1; 1; num += 1){
		printf("Enter A Number (Enter 9999 To End!): ");
		scanf("%d", &num);
		if(num == 9999){
			break;
		}
		sum = sum + num;
	}
	average = sum / i;
	
	printf("The Average Is: %d", average);
	
	
	return 0;
}
