#include<stdio.h>
#include<conio.h>
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
	printf("\n\n %d\n\n",index);
printf("ENTER NEW ELEMENT TO INSERT : ");
scanf("%d",&element);
for(i=size-1;i>=index;i--)
{
	arr[i+1]=arr[i];
	 
}
arr[index]=element;
printf("NEW ARRAY ELEMENT : \n");
for(i=0;i<size+1;i++)
{
	printf("%d\n",arr[i]);
}
    getch();
	return 0;
}
