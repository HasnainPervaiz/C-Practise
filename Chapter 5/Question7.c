#include<stdio.h>

int isPerfect(int num);

int main(){
	int num;
	
	for(num = 1; num <= 100; num++) {
        if (isPerfect(num)) {
            printf("%d ", num);
        }
    }
	
	return 0;
}

int isPerfect(int num){
	if(num <= 1){
		return 0;
	}
	
	int sum = 0, i;
	for(i = 1; i <= num/2; i++){
		if(num % i == 0){
			sum += i;
		}
	}
	return 	sum == num;
}
