#include<stdio.h>
#include<conio.h>

void main(){

//Write a program to input any 10 numbers in an array and display it. Find the biggest amoung the input numbers.

printf("#########################\n");	
printf("#####INPUT 10 NUMBERS####\n");	
printf("#########################\n");


int number[9]={};
int a;
int com = 0;
int i = 0;

for(a = 0;a<10;a++){
	
	if(a==0){
		printf("Enter the %d st Number :  ",a+1);
		scanf("%d",&number[a]);
	}else if(a==1){
		printf("Enter the %dnd Number :  ",a+1);
		scanf("%d",&number[a]);
		
	}else if(a==2){
		printf("Enter the %drd Number :  ",a+1);
		scanf("%d",&number[a]);
	}else{
		printf("Enter the %dth Number : ",a+1);
		scanf("%d",&number[a]);
	}
}


com = number[0];



printf("The numbers you entered are : ");
for(int b = 0;b<=9;b++){
	printf("%d, ",number[b]);
}


for(i=0;i<10;i++){
	
	if(number[i]> com){
		com=number[i];
		
	}
	

	
}
	
	
	
	printf("\n Largest %d",com);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}





	
	


	
	
	
	
	
	
	
	
	
	
	
