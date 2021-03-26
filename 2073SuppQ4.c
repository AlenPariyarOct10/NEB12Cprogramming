#include<stdio.h>

int mult(int num1,int num2);


int main(){
//WAP to multiply two integer numbers using function
int num1,num2;
printf("Enter the Number 1 :");
scanf("%d",&num1);
printf("Enter the Number 2 :");
scanf("%d",&num2);
mult(num1,num2);

	return 0;
}

int mult(int num1,int num2){
	printf("Multiplication of %d and %d is : %d [%d x %d = %d],",num1,num2,num1*num2,num1,num2,num1*num2);
}

