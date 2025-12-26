#include<stdio.h>

int main(){
	int num = 1, i, j;
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			printf("%d", num);
			num++;
		}
		printf("\n");
	}
	
	
	return 0;
}
