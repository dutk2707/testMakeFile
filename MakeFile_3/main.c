#include<stdio.h>
#include"swap.h"

int main(int argc, char const *argv[])
{
	int a,b;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}
