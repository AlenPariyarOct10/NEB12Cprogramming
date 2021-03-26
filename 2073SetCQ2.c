#include<stdio.h>

int main(){
//	WAP to read five positive number using array and findout the smallest among them

int num[4];
int sanocomp=0;
int a;

for(a=0;a<=4;a++){
	printf("Enter Number %d : ",a+1);
	scanf("%d",&num[a]);
	if(num[a]<0){
		printf("Error [Because you entered a negative number'%d'.]\n",num[a]);
		a=4;
	}
}


for(a=0;a<=4;a++){
	
	if(num[a]>sanocomp){
		sanocomp=num[a];
		
	}
	
}


for(a=0;a<=4;a++){
	if(num[a]<sanocomp){
		sanocomp=num[a];
	}
}

printf("\nSmallest Number = %d",sanocomp);

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}