#include<stdio.h>
#include<stdlib.h>
struct stack
{ 
   int size;
   int top;
   int *arr;
	
};
int isempty(struct stack *ptr)
{
	if(ptr->top==-1)
	{
	
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(struct stack *ptr,int value)
{
	if(isfull(ptr))
	{
		printf("stack is overflow : ");
	}
	else
	{     
		 ptr->top++;
		ptr->arr[ptr->top]=value;
		
	}
}
int  pop(struct stack *ptr)
{
	if(isempty(ptr))
	{
		printf("STACK UNDER FLOW : ");
		return -999;
	}
	else
	{
		int val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}

int main()
{
	struct stack *obb=(struct stack*)malloc(1*sizeof (struct stack));
	
	obb->top=-1;
	obb->size=20;
	obb->arr=(int *)malloc(obb->size*sizeof(int));
		push(obb,56);
        pop((obb));
	if(isempty(obb))
	{
			printf("STCK IS EMPTY : ");
	}

	
	return 0;
}
