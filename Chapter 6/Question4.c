#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int j, i, num, duplicate, count = 0;
	int unique[20];
	srand(time(NULL));
	for(i = 0; i < 20; i++){
		num = 1 + rand() % 20;
		printf("Number Generated: %d\n", num);
		for(j = 0; j < count; j++){ 
			if(unique[j] == num){
				duplicate = 1;
				break;
			}
		}
		if(!duplicate){
			unique[count] = num;
			count++;
		}
	}
	for(i = 0; i < count; ++i){
		printf("%d\n", unique[i]);
	}
}
