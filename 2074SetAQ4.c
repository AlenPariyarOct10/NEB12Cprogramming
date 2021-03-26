#include<stdio.h>

int inp,a,sum=0;

int sumInt(int inp);

int main(){
//	WAP to find the sum of n integer number using function



printf("Enter the Number : ");
scanf("%d",&inp);

sumInt(inp);

	return 0;
}

int sumInt(int inp){
	for(a=0;a<=inp;a++){
		sum=sum+a;
		
	}
	printf("Sum of Numbers till %d is : %d",inp,sum);
	
	
	
	
}
