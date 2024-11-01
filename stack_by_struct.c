#include<stdio.h>
#include<stdlib.h>
struct stack
{  
   int *array,size,top;
    	
};
void push(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
		printf("\nSTACK IS FULL : \n");
	}
	else
	{
		ptr->top=ptr->top+1;
		printf("ENTER ELEMENT TO PUSH : ");
		scanf("%d",&ptr->array[ptr->top]);
	}
	
}
void pop(struct stack *ptr)
{
	if(ptr->top==-1)
	{
		printf("STACK IS EMPTY");
	}
	else
	{
		printf("\n%d POPED FORM STACK : \n",ptr->array[ptr->top]);
		ptr->top=ptr->top-1;
	}
	
}
void peek(struct stack *ptr)
{
	int i=0;
	if(ptr->top==-1)
	{
		printf("EMPTY STACK : ");
		
	}
	else
	{
		printf("STACK ELEMENTS ARE : \n");
		for(i=ptr->top;i>=0;i--)
		{
			printf("%d\n",ptr->array[i]);
		}
	}
}


int main()
{
	int choice=0;
	struct stack *objct;
	objct=(struct stack*)malloc(1*sizeof(struct stack));
	printf("ENTER SIZE OF STACK : ");
	objct->array=(int*)malloc(objct->size*sizeof(int));
	objct->top=-1;
	scanf("%d",&objct->size);
	
	while(1)
	{
		printf("\nPRESS 1 FOR PUSH : \nPRESS 2 FOR POP : \nPRESS 3 FOR PEEK : \nPRESS 4 FOR EXIT : \n\nCHOOSE ANY ONE OPTION : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				    push(objct);
					break;	
				}
			case 2:
				{
					pop(objct);
					break;
				}
			case 3:
				{
					peek(objct);
					break;
				}
			case 4:
				{
					exit(0);
				}
		}
	}
	
	
	
}

