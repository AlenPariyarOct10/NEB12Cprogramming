#include<stdio.h>

int check(int number);

int main(){
	
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	
	
	check(number);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

int check(int number){
	if(number%2==0){
		printf("This is Even Number");
	}else if(number%2==1){
		printf("This is Odd Number");
	}
}
