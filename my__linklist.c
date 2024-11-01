#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void readlist()
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	int data=0;
	printf("ENTER ELEMENT IN LINK LIST : ");
	scanf("%d",&data);
	printf("\n");
	ptr->data=data;
	ptr->next=head;
	head=ptr;
}
void between()
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *p=head;
	int index=0,i=0,data;
	printf("\nENTER INDEX NUMBER TO INSERT AFTER : ");
	
	scanf("%d",&index);
	printf("ENTER THE NUMBER : ");
	scanf("%d",&data);
	printf("\n");
	while(i!=index-1)
	{
		p=p->next;
		i++;
	if(p==NULL)
{
	printf("INDEX NOT FOUND : ");
}	
	}


{
	ptr->data=data;
	ptr->next = p->next;
	p->next=ptr;	
}
		
}
void first_delete()
{
	struct node *ptr=head;
	head=head->next;
	free(ptr);
}

void rest_delete()
{
	struct node *ptr=head,*q;
	int i=0,index=0;
	printf("ENTER INDEX NUMBER TO DELETE : ");
	scanf("%d",&index);
	while(i!=index-2)
	{
		ptr=ptr->next;
		i++;
	}
	q=ptr->next;
	ptr->next=q->next;
	free(q);
}

void printlist()
{
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("ELEMENT IS : %d\n",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
int main()
{

	
	
	
	int choice=0;
	printf("                                                    LINKLIST :-\n");
	while(1)
	{
			printf("CHOOSE 1 FOR INSERT : \nCHOOSE 2 FOR INSERT BETWEEN : \n\nCHOOSE 3 FOR DELETE FIRST NODE : \nCHOOSE 4 FOR DELETE REST NODE : \n\nCHOOSE 5 FOR SHOW : \nCHOOSE 6 FOR EXIT : \n\nCHOOSE ANY ONE OPTION : ");
	        scanf("%d",&choice);
	        
	        switch(choice)
	        {
	        	case 1:
	        		{
	        			readlist();
	        			break;
					}
				case 2:
					{
						between();
						break;
					}
			
			    case 3:
			    	{
			    		first_delete();
			    		break;
					}
				case 4:
					{
						rest_delete();
						break;
					}
				case 5:
					{
						printlist();
						break;
					}
				case 6:
					{
						exit(0);
					}
			}
		
	}
	
return 0;
}
