#include<stdio.h>
#include<stdlib.h>
struct queue
{  
   int *array,size,front,rear;
    	
};
void enqueue(struct queue *ptr)
{
	if(ptr->rear==ptr->size-1)
	{
		printf("\nqueue IS FULL : \n");
	}
	else
	{
		ptr->front=0;
		
		ptr->rear=ptr->rear+1;
		printf("ENTER ELEMENT IN QUEUE : ");
		scanf("%d",&ptr->array[ptr->rear]);
	}
	
}
void dequeue(struct queue *ptr)
{
	if(ptr->front==ptr->rear)
	{
		printf("QUEUE IS EMPTY");
	}
	else
	{
	    printf("ELEMENT IS REMOVED FROM QUEUE : ");
		ptr->front=ptr->front+1;
	}
	
}
void peek(struct queue *ptr)
{
	int i=0;
	if(ptr->rear==-1)
	{
		printf("EMPTY QUEUE : ");
		
	}
	else
	{
		printf("QUEUE ELEMENTS ARE : \n");
		for(i=ptr->front;i<=ptr->rear;i++)
		{
			printf("%d\n",ptr->array[i]);
		}
	}
}


int main()
{
	int choice=0,i;
	struct queue *objct;
	objct=(struct queue*)malloc(1*sizeof(struct queue));
	printf("ENTER SIZE OF QUEUE : ");
	objct->array=(int*)malloc(objct->size*sizeof(int));
	objct->front=-1;
	objct->rear=-1;
	scanf("%d",&objct->size);

	
	while(1)
	{
		printf("\nPRESS 1 FOR ENQUEUE : \nPRESS 2 FOR DEQUEUE : \nPRESS 3 FOR PEEK : \nPRESS 4 FOR EXIT : \n\nCHOOSE ANY ONE OPTION : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				    enqueue(objct);
					break;	
				}
			case 2:
				{
					dequeue(objct);
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
	
	
return 0;	
}

