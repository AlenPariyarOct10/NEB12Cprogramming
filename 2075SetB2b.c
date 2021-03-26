#include<stdio.h>

int main(){
//	WAP to enter 5 integer numbers into an array and display

int numbers[4];
int a,b;

for(a = 0; a<5;a++){
	printf("Enter the number %d = ",a+1);
	scanf("%d",&numbers[a]);
}

printf("The numbers you entered are : ");
for(b=0;b<5;b++){
	printf("%d,",numbers[b]);
	
	
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
