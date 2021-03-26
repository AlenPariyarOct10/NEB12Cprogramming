#include<stdio.h>
int add(int num1,int num2);
int main(){
//	WAP to add two integer numbers using function

int num1,num2;

printf("Enter the First Number : ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);

add(num1,num2);












	return 0;
}

int add(int num1,int num2){
	printf("Addition of %d and %d is %d [%d + %d = %d]",num1,num2,num1+num2,num1,num2,num1+num2);
}