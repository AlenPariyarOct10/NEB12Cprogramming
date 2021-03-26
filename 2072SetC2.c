#include<stdio.h>

int main(){
	
//	WAP TO PRINT
//	1
//	1 2
//	1 2 3
//	1 2 3 4
//	1 2 3 4 5

int a,b;

for(a=1;a<=5;a++){
	for(b=1;b<=a;b++){
		printf("%d",b);
	}
	printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}