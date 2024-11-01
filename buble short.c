#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *array,i=0,j=0,size=0,temp=0;
	
	printf("ENTER SIZE OF ARRAY : ");
	scanf("%d",&size);
	
	array=(int*)malloc(size*sizeof(int));
	
	printf("ENTER ARRAY ELEMENTS : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("ARRAY ELEMENTS ARE : \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",array[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
			     temp=array[j];
				 array[j]=array[j+1];
				 array[j+1]=temp;	
			}
			
		}
	}
	printf("BUBLE SHORTING : \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}
