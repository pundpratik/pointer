/*Write a program that declares a double, an int, and char variables. Next declare and initialize
a pointer to each of the three variables. Your program should then print the address of, and
value stored in.*/
#include<stdio.h>
int main()
{
	double a=10;
	int b=20;
	char c='5';
	double* p1=&a;
	int* p2=&b;
	char* p3=&c;
	printf("\n adrees of a=%p and value of a =%lf",p1,*p1);
	printf("\n adrees of b=%p and value of b =%d",p2,*p2);
	printf("\n adrees of c=%p and value of c =%c",p3,*p3);
	return 0;
}
	
