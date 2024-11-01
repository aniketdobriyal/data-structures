#include<stdio.h>
int fact(int n)
{
	if(n<1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
	return 0;
}
int main()
{
	int n;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
	fact(n);
	
	printf("%d",fact(n));
	
	
	
}
