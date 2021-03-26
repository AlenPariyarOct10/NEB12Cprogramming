#include<stdio.h>
int main(){
//	WAP to enter elements into 4x4 matrix and find the sum of teh elements of matrix.

int matrix1[15];
int matrix2[15];
int a, b;


printf("####### 4x4 Matrix Addition ######\n\n");
printf("ELEMENTS OF 4x4 Matrix  are : \n");
printf("_\t\x20\x20_\n");
printf("| a b c d |\n");
printf("| e f g h |\n");
printf("| i j k l |\n");
printf("| m n o p |\n");
printf("_\t\x20\x20_\n");

printf("\n\n");

printf("---------MATRIX 1---------\n");


for(a=0;a<=15;a++){
	if(a<4){
		printf("Enter The Element <%d> of First Column [MATRIX 1] : ",a+1);
		scanf("%d",&matrix1[a]);
		printf("\n");
	}else if(a>3 && a<8){
		printf("Enter The Elements <%d> of Second Column [MATRIX 1] : ",a+1);
		scanf("%d",&matrix1[a]);
		printf("\n");
		
	}else if(a>7 && a<12){
		printf("Enter The Elements <%d> of Third Column [MATRIX 1] : ",a+1);
		scanf("%d",&matrix1[a]);
		printf("\n");
	}else if(a>11 && a <16){
		printf("Enter The Elements <%d> of Fourth Column [MATRIX 1] : ",a+1);
		scanf("%d",&matrix1[a]);
		printf("\n");
	}
	
	
}


for(b=0;b<=15;b++){
if(b<4){
		printf("Enter The Elements <%d> of First Column [MATRIX 2] : ",b+1);
		scanf("%d",&matrix2[b]);
		printf("\n");
	}else if(b>3 && b<8){
		printf("Enter The Elements <%d> of Second Column [MATRIX 2] : ",b+1);
		scanf("%d",&matrix2[b]);
		printf("\n");
		
	}else if(b>7 && b<12){
		printf("Enter The Elements <%d> of Third Column [MATRIX 2] : ",b+1);
		scanf("%d",&matrix2[b]);
		printf("\n");
	}else if(b>11 && b<16){
		printf("Enter The Elements <%d> of Fourth Column [MATRIX 2] : ",b+1);
		scanf("%d",&matrix2[b]);
		printf("\n");
	}
}

printf("########### OUTPUT ###########");
printf("REQUIRED 4x4 Matrix : \n");
printf("\n| %2d %2d %2d %2d|",matrix1[0]+matrix2[0],matrix1[4]+matrix2[4],matrix1[8]+matrix2[8],matrix1[12]+matrix2[12]);
printf("\n| %2d %2d %2d %2d|",matrix1[1]+matrix2[1],matrix1[5]+matrix2[5],matrix1[9]+matrix2[9],matrix1[13]+matrix2[13]);
printf("\n| %2d %2d %2d %2d|",matrix1[2]+matrix2[2],matrix1[6]+matrix2[6],matrix1[10]+matrix2[10],matrix1[14]+matrix2[14]);
printf("\n| %2d %2d %2d %2d|",matrix1[3]+matrix2[3],matrix1[7]+matrix2[7],matrix1[11]+matrix2[11],matrix1[15]+matrix2[15]);

	return 0;
}