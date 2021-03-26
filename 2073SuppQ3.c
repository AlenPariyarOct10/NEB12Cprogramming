#include<stdio.h>
int main(){
	
//	WAP to find the SUM, DIFFERENCE and Greater of Two Number.

char option[1];
int num1,num2;

printf("Enter first number : ");
scanf("%d",&num1);
printf("Enter second number : ");
scanf("%d",&num2);
printf("Enter[+ for Sum],[- for Difference],[< for Greater ]: ");
scanf("%s",&option[1]);

switch(option[1]){
	case '+':
		printf("SUM[%d + %d = %d]", num1,num2,num1+num2);
		break;
		
	case '-':
		printf("DIFFERENCE[%d - %d = %d]", num1,num2,num1-num2);
		break;
		
	case '<':
		if(num1<num2){
			printf("%d is Greater",num2);
		}else if(num1>num2){
			printf("%d is Greater",num1);
		}
		break;
		
	case '>':
		if(num1<num2){
			printf("%d is Greater",num2);
		}else if(num1>num2){
			printf("%d is Greater",num1);
		}
		break;
		
	default:
		printf("SOMETHING WENT WRONG"); 
}
	
	
	
	return 0;
}