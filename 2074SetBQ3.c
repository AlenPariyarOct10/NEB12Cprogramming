#include<stdio.h>
int inp;
int OddOrEven(int inp);


int main(){
	
	printf("Enter the Number : ");
	scanf("%d",&inp);
	OddOrEven(inp);
	
	return 0;	
}

int OddOrEven(int inp){
	if(inp%2==0){
		printf("The number %d is even number ",inp);
		
		}else if(inp%2==1){
			printf("The number %d is even number ",inp);
		}
	}

