#include<stdio.h>
int x=333;
int fun(int i, int j)
{
	return i+j;
}
int left( )
{
	x=100;
	return x;
}
int right( )
{
	x++;
	return x;
}
int main( )
{
	printf("\nSum = %d\n", fun(left( ), right( )));
	return 0;
}
