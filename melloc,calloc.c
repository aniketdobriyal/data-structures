#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,*ptr=&a,i;


	printf("\nENTER SIZE OF ARRAY : \n");
	scanf("%d",&a);
		
	ptr=(int*)malloc(a*sizeof(int));

	printf("ENTER ELEMENT IN ARRAY : \n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("ELEMENTS ARE : \n");


for(i=0;i<a;i++)
{
		printf("%d\n",ptr[i]);
}

scanf("%d",&a);

	ptr=(int*)realloc(ptr,a*sizeof(int));


for(i=0;i<a;i++)
{
		printf("%d\n",ptr[i]);
}
	return 0;
}
