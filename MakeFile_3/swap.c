#include"swap.h"
void swap(int num1,int num2){
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("%d\n%d\n",num1,num2 );
}