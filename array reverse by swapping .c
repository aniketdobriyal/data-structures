#include<stdio.h>
int main()
{
	int arr[100],i=0,temp=0,numb=0,n=0;
	printf("SELECT NUMBERS OF ARRAY :  ");
	scanf("%d",&numb);
	n=numb-1;
	
	for(i=0;i<numb;i++)
{
		scanf("%d",&arr[i]);
	}
	printf("\n\narr 2 is : %d\n\n",arr[2]);

		for(i=0;i<n/2;i++)
	{
			temp=arr[i];
		arr[i]=arr[n];
		arr[n]=temp;
		
	n--;
}
	printf("\n\narr 2 is : %d\n\n",arr[2]);
printf("ARRAYS ELEMENTS ARE : \n");
 for(i=0;i<numb;i++)
 {
 	printf("%d\n",arr[i]);
 }
	return 0;
}
