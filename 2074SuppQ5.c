#include<stdio.h>

struct students{
	char name[10];
	int eco;
	int math;
	int computer;
	int english;
	int account;
	
	
}student[10];

int main(){
//	WAP to enter the 5 subject marks and calculate sum and print using structure
	int sum;
	
	printf("Enter name of the students : ");
	scanf("%s",&student[1].name);
	6
	printf("<%s> MARKS IN ECONOMICS : ",student[1].name);
	scanf("%d",&student[1].eco);
	
	printf("<%s> MARKS IN ENGLISH : ",student[1].name);
	scanf("%d",&student[1].english);
	
	printf("<%s> MARKS IN MATH : ",student[1].name);
	scanf("%d",&student[1].math);
	
	printf("<%s> MARKS IN COMPUTER : ",student[1].name);
	scanf("%d",&student[1].computer);
	
	printf("<%s> MARKS IN ACCOUNT : ",student[1].name);
	scanf("%d",&student[1].account);
	
	sum = student[1].account+student[1].computer+student[1].math+student[1].english+student[1].eco;
	
	printf("<%s Your Total Marks Is : > %d [%d / %d ]",student[1].name,sum,sum,500);
	
	
	
	
	
	
	
	
	return 0;
}
