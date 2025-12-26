#include<stdio.h>

int main(){
	int num = 1;
	int resultBy10 = 0;
	int resultBy100 = 0;
	int resultBy1000 = 0;
	
	printf("N\t10*N\t100*N\t1000*N\t\n\n");
//	for(num = 1; num <= 1000; num = num * 10){
//		printf("%d\t", num);
//	}	
	while(num <= 10) {			
	
	
		resultBy10=num*10;
		resultBy100=num*100;
		resultBy1000=num*1000;
		
		if(num==5||num==8){
			num++;
		continue;
	}
		printf("%d\t%d\t%d\t%d\t\n\n",num,resultBy10, resultBy100, resultBy1000);
//		printf("%d\t", result);
		
		num++;
	}
	
	return 0;
}
