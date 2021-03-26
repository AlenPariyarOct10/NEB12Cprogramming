#include<stdio.h>
int main(){
	
	int num[19];
	int a=0,b;
	int thulo=0;
	int sano=0;
	
	
	for(a=0;a<=19;a++){
		printf("Enter the number : ");
		scanf("%d",&num[a]);
	}
	
	for(a=0;a<=19;a++){
		printf("\n %d",num[a]);
	}
	
	for(a=0;a<=19;a++){
		if(num[a]>thulo){
			thulo=num[a];
		}
	}
	
	sano = thulo;	
	
	printf("\nThulo = %d",thulo);
	
	for(a=0;a<=19;a++){
		if(num[a]<sano){
			sano= num[a];
			
		}
	}
	
	printf("\n sano = %d\n\n",sano);
	
	
	
	
	
	printf("Numbers in Assending Order : \n");
	for(sano;sano<=thulo;sano++){
		for(a=0;a<=19;a++){
			if(sano==num[a]){
				printf("%d,",sano);
				
				}
				
				
			}
		}
		
		
		
		
		
		
	return 0;	
		
	}
	
	
	
	
	
	

	
	
	
	
	
	