#include<stdio.h>
int main(){
//	write a program to find addition of any two matrix of size 2*2 using array

int matrix1[4];
int matrix2[4];

printf("###############################\n");
printf("########### MAtRIX 1 ###########\n");
printf("###############################\n\n");
printf("__\t__\n");
printf("|a\tb|\n");
printf("|c\td|\n");
printf("__\t__\n");

printf("Enter the value of element a : ");
scanf("%d",&matrix1[1]);
printf("Enter the value of element b : ");
scanf("%d",&matrix1[2]);
printf("Enter the value of element c : ");
scanf("%d",&matrix1[3]);
printf("Enter the value of element d : ");
scanf("%d",&matrix1[4]);
printf("\n\n");

printf("###############################\n");
printf("########### MARIX 2 ###########\n");
printf("###############################\n\n");
printf("__\t__\n");
printf("|a\tb|\n");
printf("|c\td|\n");
printf("__\t__\n");

printf("Enter the value of element a : ");
scanf("%d",&matrix2[1]);
printf("Enter the value of element b : ");
scanf("%d",&matrix2[2]);
printf("Enter the value of element c : ");
scanf("%d",&matrix2[3]);
printf("Enter the value of element d : ");
scanf("%d",&matrix2[4]);
printf("\n\n");
printf("\bTapai ley Khojnu vayeko MATRIX 2*2 Ko Maan : \n");

printf("__\t__\n");
printf("|%2d\t%2d|\n",matrix1[1]+matrix2[1],matrix1[2]+matrix2[2]);
printf("|%2d\t%2d|\n",matrix1[3]+matrix2[3],matrix1[4]+matrix2[4]);
printf("__\t__\n");








											
	
	
	
	
	
	return 0;
}
