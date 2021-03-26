#include<stdio.h>

int main(){
//	WAP to find addition of two matrices (3 x 3)

int m1[9];
int m2[9];
int a;

printf("Enter Elements of Matrix 1 :: \n");
for(a=0;a<=8;a++){
	if(a<3){
		printf("Enter the <%d> Elements of First Column : ",a+1);
		scanf("%d",&m1[a]);
	}
	
	if(a>2&&a<6){
		printf("Enter the <%d> Elements of Second Column : ",a+1);
		scanf("%d",&m1[a]);
	}
	
	if(a>5&&a<9){
		printf("Enter the <%d> Elements of Third Column : ",a+1);
		scanf("%d",&m1[a]);
	}
}



printf("\n\nEnter Elements of Matrix 2 :: \n");
for(a=0;a<=8;a++){
	if(a<3){
		printf("Enter the <%d> Elements of First Column : ",a+1);
		scanf("%d",&m2[a]);
	}
	
	if(a>2&&a<6 ){
		printf("Enter the <%d> Elements of Second Column : ",a+1);
		scanf("%d",&m2[a]);
	}
	
	if(a>5&&a<9){
		printf("Enter the <%d> Elements of Third Column : ",a+1);
		scanf("%d",&m2[a]);
	}
}



printf("\n\nThe Required MATRIX [ MATRIX 1 + MATRIX 2] : \n");
printf("| %2d %2d %2d |\n",m1[0]+m2[0],m1[3]+m2[3],m1[6]+m2[6]);
printf("| %2d %2d %2d |\n",m1[1]+m2[1],m1[4]+m2[4],m1[7]+m2[7]);
printf("| %2d %2d %2d |\n",m1[2]+m2[2],m1[5]+m2[5],m1[8]+m2[8]);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}