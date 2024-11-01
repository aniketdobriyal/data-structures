#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *create_node(int data)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
	ptr->left=NULL;
	ptr->right=NULL;
	
	return ptr;
}

void display(struct node *root)
{
        if(root!=NULL)
	{ 
		display(root->left);
		printf("ELEMENT : %d\n",root->data);
		display(root->right);
		
	}
}

int search(struct node *ptr)
{
	int key =0;
	printf("ENRER KEY TO FIND : ");
	scanf("%d",&key);
    while(ptr!=NULL)
	{
	  	 if(key==ptr->data)
	   {
	   	printf("KEY FOUND : ");
	   	return 0;
	   }	
	   else if(key>ptr->data)
	   {
	   	ptr=ptr->right;
	   }
		
	   else if(key<ptr->data)
	   {
	   	ptr=ptr->left;
	   }
	   
	}
	if(ptr==NULL)
	{
	printf("KEY NOT FOUND : ");
	}	

}
int insert(struct node *ptr)
{
	int key=0;
	struct node *n=NULL,*node;
	
	printf("\nENTER KEY NUMBER TO ADD NODE : ");
	scanf("%d",&key);
//	n=create_node(key);
	while(ptr!=NULL)
	{   n=ptr;
		if(key==ptr->data)
		{
			printf("KEY CAN NOT BE ADD : ");
			return 0;
		}
		else if(key>ptr->data)
		{
			ptr=ptr->right;
			
		}
		else
		{
			ptr=ptr->left;
			
		}
	
	}
		node=create_node(key);
	
  	if(key<n->data)
  	{
  		n->left=node;
	  }
	else
	{
		n->right=node;
	}
}
int main()
{
		struct node *p,*p1,*p2,*p3,*p4,*p5,*p6,*p7;
	
p=create_node(10);

p1=create_node(7);
p2=create_node(12);

p3=create_node(5);
p4=create_node(8);

p5=create_node(11);
p6=create_node(15);



  p->left=p1;
  p->right=p2;
  
  p1->left=p3;
  p1->right=p4;
  
  p2->left=p5;
  p2->right=p6;
 
	display(p);
	search(p);
	insert(p);
		display(p);
	
}
