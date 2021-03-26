#include<stdio.h>
#include<string.h>

int main(){
	char name[20];
	printf("Enter the Text here [MAX-21] :");
	gets(name);
	strrev(name);
	
	
	printf("\n Entered Text in Reverse Order : %s",name);
	
	
	
	
	
	return 0;
}