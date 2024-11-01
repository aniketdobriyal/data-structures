#include<stdio.h>
int febbo(int x)
{  static int t1=0,t2=1,t3=0;
	if(x>0)
	{
	   t3=t1+t2;
	   t1=t2;
	   t2=t3;
	   printf("%d,",t3);	
	   
	   return febbo(x-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int number=0;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&number);
	
	printf("0,1,");
	febbo(number-2);
	
	return 0;
}
