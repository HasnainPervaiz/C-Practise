#include<stdio.h>
#define SIZE 10

int main(){
	int i, pass;
	int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	printf("Data items in original order");
	for (i = 0; i < SIZE; ++i) {
	    printf("%4d", a[i]);
	} 
	for (pass = 1; pass < SIZE; ++pass) { 
		for (i = 0; i < SIZE - pass; ++i) {  
			if (a[i] > a[i + 1]) {                             
	        int hold = a[i];                                
	        a[i] = a[i + 1];                                
	        a[i + 1] = hold;                                
	       } 
		}
	}
	printf("\nData items in ascending order");
	for (i = 0; i < SIZE; ++i) {
	   printf("%4d", a[i]);
	}
	printf("");
	
	
	return 0;
}
