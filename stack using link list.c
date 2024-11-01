#include<stdio.h>
#include<stdlib.h>
int top = -1;
int size = 0;
struct node
 {
    int data ;
	struct node *next;	
 };
 struct node *head = NULL;
 
 void push()
  {
  
  	 struct node *ptr = (struct node*)malloc(sizeof(struct node));
  	  if(top==size-1)
  	   {
  	      printf("\n\nSTACK IS FULL : \n\n");
			   	
	   }
	   
	   else 
	     {
	     	top = top+1;
	        
			 
			 printf("\nENTER ELEMENT IN STACK : \n");
			 scanf("%d",&ptr->data);
			 
			 ptr->next = head;
			 head = ptr;    	
		 }
  }
  
  void pop()
    {
    	 if(top==-1)
    	  {
    	  	printf("\n\nPOP OPERATION CAN NOT BE PERFORM  : \n\n");
    	  	
		  }
		  else
		    {
		    	printf("\n\nELEMENT POPED FROM STACK : \n\n");
		    	 head = head->next;
		    	top = top-1;
			}
	}
	
	void display()
	 {
	 	int i; 
	 	struct node *ptr = head;
	 	   if(top==-1)
	 	     {
	 	     	printf("\n\nSTACK IS EMPTY : \n\n");
			  }
		else
		{
		
	 	printf("\nSTACK ELEMENTS ARE : \n");
	 	    for ( i = top ; i >= 0 ; i --)
	 	    {
	 	    	printf("%d\n",ptr->data);
	 	    	ptr = ptr->next;
			 }
	 		 }
	 }
 
 
int main()
 {
 	int choice = 0;
    printf("ENTER SIZE OF STACK : ");
	 scanf("%d",&size);
	
	 
	 while(1)
	   {
	   	   printf("\n\nENTER 1 FOR PUSH : \nENTER 2 FOR POP : \nENTER 3 FOR DISPLAY : \n\nENTER ANY NUMBER : ");
	   	    scanf("%d",&choice);
	   	    
	   	    
	   	    switch(choice)
	   	      {
	   	      	case 1:
	   	      		{
	   	      			push();
	   	      			break;
						 }
				case 2:
					{
						pop();
						break;
						
					}
				case 3:
					{
						display();
						break;
					}
				 }
	   }
	 	
 	
 
 	
 	return 0;
 }
