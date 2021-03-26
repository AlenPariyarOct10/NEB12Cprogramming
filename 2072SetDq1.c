#include<stdio.h>
int main(){
//	WAP to check if a given number is odd or even using if else statement
int num;

printf("Enter the number : ");
scanf("%d",&num);

if(num%2==0){
	printf("%d is an even number. ",num);
}else if(num%2==1){
	printf("%d is an odd number.",num);
}
	
	
	
	
	
	
	
	
	return 0;
}