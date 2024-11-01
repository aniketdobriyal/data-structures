#include<stdio.h>
#include<stdlib.h>
int *array,size=0,front=0,rear=-1;

void enqueue()
{
	if(rear==size-1)
	{
		printf("\nQUEUE IS FULL : \n");
	}
	else
    {
    	rear++;
    
    	printf("ENTER ELEMENT IN QUEUE : ");
    	scanf("%d",&array[rear]);
    	
	}
}

void dequeue()
{
	if(front == - 1 || front > rear)
	{
		printf("\nQUEUE IS EMPTY : \n");
		
	}
	else  
	{    
		front=front+1;
	}
}
void show()
{
	int i=0;

	printf("\nQUEUE ELEMENT ARE : \n");
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",array[i]);
	}
}



int main()
{
	int i=0 ,choice=0;
	
	printf("ENTER SIZE OF ARRAY : ");
	scanf("%d",&size);
	array=(int*)malloc(size*sizeof(int));
		
while(1)
{
	printf("\nENTER 1 FOR ENQUEUE : \nENTER 2 FOR DEQUEUE : \nENTER 3 FOR SHOW : \nENTER 4 FOR EXIT : \n\nCHOOSE ANY ONE OPTION : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1:
    		{
    			enqueue();
    			break;
			}
		case 2:
    		{
    			dequeue();
    			break;
			}
		case 3:
    		{
    			show();
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
