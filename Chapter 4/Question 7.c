#include<stdio.h>

int main(){
	int num, sum = 0;
	
	for(num = 2; num <= 30; num += 2){
		sum = sum + num;
	}
	
	printf("Sum Of Even Numbers From 2-30 Is: %d", sum);
	
	
	
	return 0;
}
