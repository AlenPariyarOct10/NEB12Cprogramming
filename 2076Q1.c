#include<stdio.h>

int area(int length,int breadth);

int main(){
//	WAP to input Length and breadth of a pond and find its area by using user defined function
int length;
int breadth;

printf("Enter the value of Length of a pond [FEET] : ");
scanf("%d",&length);
printf("Enter the value of Breadth of a pond [FEET] : ");
scanf("%d",&breadth);

area(length,breadth);

	return 0;
}

int area(int length,int breadth){
	printf("\nThe area of a pond with %d Feet Length and %d Feet Breadth is %d Feet square.",length,breadth,length*breadth);
}