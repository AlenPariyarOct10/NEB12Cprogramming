#include<stdio.h>

int main(){
//	WAP to input 10 integer numbers in an array and find the sum 

int numbers[9];
int sum =0, b,a;
int final=0;


for(b=0;b<=9;b++){
	printf("Enter the value of Number <%d> : " ,b);
	scanf("%d",&numbers[b]);
}

for(a=0;a<=9;a++){
	sum = numbers[a]+sum;
	
}
final = sum;


	
	printf("\n num: %d" ,final);
	
	
	
	return 0;
}
