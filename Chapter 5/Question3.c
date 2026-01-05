#include<stdio.h>

int ifeven(int num);

int main(){
	int number, num;

	printf("1 Is For Even, 0 is For Odd And -1 Is For 0.\n");

	while(1){
		printf("Enter A Number or Enter -1 To Exit: ");
		scanf("%d", &num);
		
		if(num == -1){
			break;
		}
		
		number = ifeven(num);
		printf("%d\n", number);	
	}
	
	printf("Thankyou!!");
	
	return 0;
}

int ifeven(int num){
	if(num == 0){
		printf("Number Is Neither Even Or Odd.\n");
		return -1;
	}
	else if(num%2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
