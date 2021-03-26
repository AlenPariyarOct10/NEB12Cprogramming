#include<stdio.h>
int main(){
//	WAP which find the sum, difference and product of 2 numbers using switch case statement

char operation[1];
int num1,num2;

printf("Enter Number 1 :");
scanf("%d",&num1);
printf("Enter Number 2 :");
scanf("%d",&num2);
printf("Enter [+ for Sum][- for Difference ][* for Product] : ");
scanf("%s",&operation[1]);

switch(operation[1]){
	case '+':
		printf("[%d + %d = %d]",num1,num2,num1+num2);
		break;
		
	case '-':
		printf("[%d - %d = %d]",num1,num2,num1-num2);
		break;
	
	case '*':
		printf("[%d x %d = %d]",num1,num2,num1*num2);
		break;
		
	default:
		printf("SomeThing Went Wrong. Check your input and try again.");
		
		
		
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}