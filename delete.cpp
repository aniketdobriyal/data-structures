#include<stdio.h>
int main()
{
	int arr[100],i=0,index=0,element=0,size=0;
	printf("ENTER SIZE OF ARRAY : ");
	scanf("%d",&size);
	
	printf("ENTER ARRAY ELEMENT : \n");
	for(i=0;i<size;i++)
{
		scanf("%d",&arr[i]);
}
   printf("ARRAY ELEMENT ARE : \n");
   	for(i=0;i<size;i++)
{
		printf("%d\n",arr[i]);
}

printf("ENTER NEW ELEMENT POSTION BEFORE : ");
scanf("%d",&index);

for(i=0;i<size;i++)
{
	if(arr[i]==index)
	{
		index=i;
	}
}
printf("ENTER NEW ELEMENT TO INSERT : ");
scanf("%d",&element);
for(i=index;i<size-1;i++)
{
	arr[i]=arr[i+1];
	
}
arr[index]=element;
printf("NEW ARRAY ELEMENT : \n");
for(i=0;i<size;i++)
{
	printf("%d\n",arr[i]);
}
	return 0;
}
