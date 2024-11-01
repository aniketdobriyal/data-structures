#include<stdio.h>
int main()
{
	int array[5],i,j;
	printf("ENTER NUMBER IN ARRAY : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("ARRAY ELEMENTS ARE : \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",array[i]);
	}
	
	return 0;
}
