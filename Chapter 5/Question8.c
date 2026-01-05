#include<stdio.h>

int time(int hrs,int min,int sec);

int main(){
	int h1, h2, m1, m2, s1, s2, time1, time2, difference;
	
	printf("Enter First Time\n");
	printf("Enter No. Of Hours: ");
	scanf("%d", &h1);
	printf("Enter No. Of Minutes: ");
	scanf("%d", &m1);
	printf("Enter No. Of Seconds: ");
	scanf("%d", &s1);
	
	time1 = time(h1, m1, s1);
	
	printf("Enter Second Time\n");
	printf("Enter No. Of Hours: ");
	scanf("%d", &h2);
	printf("Enter No. Of Minutes: ");
	scanf("%d", &m2);
	printf("Enter No. Of Seconds: ");
	scanf("%d", &s2);
	
	time2 = time(h2, m2, s2);
	
	difference = time2-time1;
	
	printf("Time In Seconds is: %d", difference);
	
	return 0;
}

int time(int hrs,int min,int sec){
	int time_in_seconds;
	if(hrs == 12){
		hrs = 0;
	}
	time_in_seconds = (hrs * 3600) + (min * 60) + sec;
}
