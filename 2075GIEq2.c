#include<stdio.h>
int main(){
//	WAP to enter 10 integer numbers into an array and display in ascending order
int num[9];
int a;
int thulo=0,sano=0;

for(a=0;a<=9;a++){
	printf("<%2d>Enter the number : ",a+1);
	scanf("%d",&num[a]);
}

for(a=0;a<=9;a++){
	if(num[a]>thulo){
		thulo=num[a];
	}
}
sano=thulo;

for(a=0;a<=9;a++){
	if(num[a]<sano){
		sano=num[a];
	}
}

printf("\n%d is Bigger .",thulo);
printf("\n%d is Smaller .\n\n",sano);

int s=sano;
int t=thulo;

//for(finalSmall;finalSmall<=finalBig;finalSmall++){
for(s;s<=t;s++){

	for(a=0;a<=9;a++){
		if(s==num[a]){
			printf("%d",num[a]);
			if(a<9){
				printf(" , ");
			}
		}
	}
}





	
	
	return 0;
}