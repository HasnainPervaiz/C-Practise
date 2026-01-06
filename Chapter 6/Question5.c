#include<stdio.h>

int main(){
	int which_class, i;
	int seat[10] = {0};
	
	while(1){
		printf("Please Type 1 For First Class Or 2 For Economy Class(Enter -1 To Exit The Program): ");
		scanf("%d", &which_class);
		
		if(which_class == 1){
			for(i = 0; i < 5; i++){
				if(seat[i] == 0){
					seat[i] = 1;
					puts("First Class");
					printf("Seat No.: %d\n\n", i + 1);
					break;
				}	
			}
			if(i == 5){
				puts("\nNo More Seats Left.");
				printf("Next Flight Leaves In 3 Hours.\n\n");
			}
		}
		
		else if(which_class == -1){
			break;
		}
		
		else if(which_class == 2){
			for(i = 5; i < 10; i++){
				if(seat[i] == 0){
					seat[i] = 1;
					puts("Economy Class");
					printf("Seat No.: %d\n\n", i + 1);
					break;
				}	
			}
			if(i == 10){
				puts("No More Seats Left.");
				printf("Next Flight Leaves In 3 Hours.\n\n");
			}
		}
		
		else{
			printf("Invalid Value Entered! Try Again.\n\n");
			continue;
		}	
	}	
	
	return 0;
}
