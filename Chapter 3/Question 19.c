#include<stdio.h>

int main(){
	int side1, side2, side3;
	printf("Enter The Largest Side: ");
	scanf("%d", &side1);
	printf("Enter The Second Side: ");
	scanf("%d", &side2);
	printf("Enter The Third Side: ");
	scanf("%d", &side3);
	
	if(side1 <= side2 && side1 <= side3){
		printf("First Side Is Not The Largest!");
		return 0;
	}
	else{
		if((side1 * side1) == ((side2 * side2) + (side3 * side3))){
			printf("Right-Angled Triangle.");
		}
		else{
			printf("Not A Right-Angled Triangle.");
		}
	}
	
	
	return 0;
}
