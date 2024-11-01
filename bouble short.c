#include<stdio.h>
int main()
{
	int array[10],i,j,temp = 0;
	
	printf("ENTER ARRAY ELEMENTS : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("ARRAY ELEMENTS ARE : \n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
	printf("SHORTED ARRAY BY BUBBLE SHORT : \n");
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
	
	return 0;
}
