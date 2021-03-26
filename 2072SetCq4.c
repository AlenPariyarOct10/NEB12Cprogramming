#include<stdio.h>
int main(){
	
//	WAP to find the factorial of a given number

int num,a,result;
int inp=num;


printf("####FACTORIAL_CALCULATOR####\n");
printf("Enter the number : ");
scanf("%d",&num);

for(a=num;a>=1;a--){
	if(a<num){
		num=num*a;
	}
}

result=num;

printf("\nFactoraial=%d", result);


	return 0;
}