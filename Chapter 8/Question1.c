#include<stdio.h>

int main(){
	FILE *fptr;
	char message[100];
	fptr = fopen("message.txt","w");
	fprintf(fptr, "%s", "Welcome to File Handling in C!");
	fclose(fptr);	
	printf("Message from file:\n");
	fptr = fopen("message.txt", "r");
	fgets(message,sizeof message, fptr);
	printf("%s", message);
	fclose(fptr);
	
	
	return 0;
}
