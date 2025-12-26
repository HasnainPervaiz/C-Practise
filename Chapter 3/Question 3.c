#include<stdio.h>

int main(){
	int x = 1;
	int sum = 0;
	
//	for(x = 1; x <= 10; x++){
//		printf("%d\n", sum + x);
//	}
	
	while(x <= 10){
		sum += x;
		++x;
	}
	
	printf("The Sum Is: %d\n", sum);	
	
}
