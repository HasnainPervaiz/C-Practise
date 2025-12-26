#include<stdio.h>

int main(){
	int num;
	int answer1, answer2, answer3;
	
	printf("A\tA+2\tA+4\tA+6\n\n");
	
	for(num = 3; num <= 15; num = num + 3){
		answer1 = num + 2;
		answer2 = num + 4;
		answer3 = num + 6;
		
		printf("%d\t%d\t%d\t%d\n", num, answer1, answer2, answer3);
	}
	
	
	
	return 0;
}
