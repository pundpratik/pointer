/*Demonstrate addition of two floating type numbers by using call by address.*/
#include<stdio.h>
int addition(float *p ,float *q)
{
	float c;
	c=*p+*q;
	return(printf("\n addition of two number after call by address=%f",c));
}
int main()
{
	float a,b;
	printf("\n enter any 2 values");
	scanf("%f%f",&a,&b);
	addition(&a,&b);
	return 0;
}
	
	
	
