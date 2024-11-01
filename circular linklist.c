#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};

struct node *head;

printlist()
{

	struct node *ptr=head;
	printf("\n");
	while(ptr->next!=head)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
	printf("%d\n\n",ptr->data);
}
void readlist()
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *q;
	int data;
	scanf("%d",&data);

if(head==NULL)
{
	ptr->data=data;
	ptr->next=ptr;
   head=ptr;
   q=head;
}
else
{
	
   ptr->data=data;
   ptr->next=head;
   head=ptr;
   q->next=head;
   	
	
}
}

void delete_()
{
	struct node *ptr=head,*q;
	int index,i;
	printf("enter index number to delete: ");
	scanf("%d",&index);

	while(i!=index-1)
	{
		ptr=ptr->next;
		i++;
		
	}
	q=ptr->next;
	ptr->next=q->next;
	free(q);
	
	
	
}
int main()
{

    
  readlist(); readlist(); readlist(); readlist(); readlist(); delete_();
    printlist();
    
}
