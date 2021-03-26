#include<stdio.h>
int main(){
//	WAP to find greatest number among four numbers .

int inp[3],a;
int thulo=0;

for(a=0;a<=3;a++){
	printf(" <%d> Enter Number : ",a+1);
	scanf("%d",&inp[a]);
}

for(a=0;a<=3;a++){
	if(inp[a]>thulo){
		thulo=inp[a];
	}
}

thulo;

printf("\nGreatest Number is : %d",thulo);



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}