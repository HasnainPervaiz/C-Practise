#include<stdio.h>

int main(){
	int arr[5];
	int i,k, duplicate = 0, num, j;
	
	for(i = 0; i < 5; i++){
		printf("Enter A Number(Between 10-100): ");
		scanf("%d", &num);	
		
		arr[i] = num;
		for(j = 0; j < i; j++){ 
			if(arr[j] == arr[i]){
				arr[i]=999;
				break;
			}else{
			arr[i] = num;	
			}
			
		}
	}	
	for(k=0;k<5;k++) 
	{
		if(arr[k]==999) {
			continue;
		}
		printf("%d number is %d\n",k+1, arr[k]);
	}
		
	return 0;
}
