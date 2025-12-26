#include<stdio.h>

int main(){
	int num, i, total, smallest;
	
	printf("Enter A Number That Specifies How Many Numbers Are To Be Added: ");
	scanf("%d", &total);
	printf("Enter A Number: ");
	scanf("%d", &num);
	smallest = num;
	
	for(i = 2; i <= total; i++){
		printf("Enter A Number: ");
		scanf("%d", &num);
			if(num < smallest){
				smallest = num;
			}
	}
	
	printf("Smallest Value Is: %d", smallest);
	
	
	return 0;
}
