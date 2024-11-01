#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
	{
	   int data;
	   struct node *next;	
	};
	struct node *head = NULL;
	void readlist()
	{
		struct node *ptr = (struct node*)malloc(sizeof(struct node));
		printf("\nENTER ELEMENT IN LINKLIST : ");
		scanf("%d",&ptr->data);
		
		ptr->next = head;
		head = ptr;
		
		
	} 
	
	void printlist()
	 {
	 	struct node *ptr = head;
	 	printf("LINKLIST ELEMENTS ARE : \n");
	 
	    while(ptr->next!=NULL)
	 	{
	 	  printf("%d\n",ptr->data);
		   ptr = ptr->next;	
		}
		printf("%d",ptr->data);
	 }
	 
	 void deletion()
	  {
	  	 struct node *ptr = head;
	  	 int number  = 0;
	  	 
	  	 printf("\nENTER ELEMENT TO DELETE FROM LINK : ");
	  	 scanf("%d",&number);
	  	 
	  	 if(head->data==number)
	  	  {
	  	  		printf("ELEMENT %d IS DELETED : \n",head->data);
	  	     head = head->next;  	
		  }
		  
		  else
		{
		  
	  	   while(ptr->next->data!=number)
	  	    {
	  	    
	  	       ptr = ptr->next;	
			}
			printf("\nELEMENT %d IS DELETED : \n",ptr->next->data);
             ptr->next = ptr->next->next;
 	     }
	     
	  }
	  
	  void insert_btw()
	  	{
	  	   struct node *p = head;	
	  	   struct node *ptr = (struct node*)malloc(sizeof(struct node));
	  	   int element = 0;
	  	   
	  	   printf("\nENTER ELEMENT TO INSERT BEFORE : ");
	  	   scanf("%d",&element);
	   
	       printf("ENTER LINK DATA : ");
	       scanf("%d",&ptr->data);
	       
          if(head->data==element)
		  {
		     	ptr->next = head;
		    	head = ptr;
		  }	  	   
	  	   else
	{
			 
	  	   while(p->next->data!=element)
	  	    {
	  	    	p = p->next;
			}
			
              ptr->next = p->next;			
		      p->next = ptr;
		      
		     
	}
		}
		
		void reverse()
			{   
				struct node *current = head;
				struct node *pre = NULL;
				struct node *temp = head;
				
				while(temp!=NULL)
					{
						temp = temp->next;
						current->next = pre;
						pre = current;
						current = temp;
					}
			        head = pre;
			      
				  printf("\nREVERSE COMPLETED : \n");			
			}
			
	void middle_term()
	{
		    int count = 0 , i = 0;
			struct node *ptr = head;
			while(ptr!=NULL)
        	{
			    ptr = ptr->next;
				count++;	
			}	
		    ptr = head;
		    count = (count/2);
			     
		  
		    while(i!=count)
			{
				ptr = ptr->next;
				i++;				
		    }	 
		    printf("\nMIDDLE TERM IS : %d\n",ptr->data);					
	}
	
	 void reverse_k()
	 {
	 	struct node *current = head;
	 	struct node *temp = head->next;
	 	struct node *pre = NULL;
	 	 int k = 0;
	 	 
	 	 printf("\nENTER VALUE OF K : ");
	 	  scanf("%d",&k);
	 	  
	   while(k!=0)
	   {
	      current->next = pre;
	      pre = current;
	      current = temp;
   	      temp = temp->next;
	        k--;	
	   } 
	     head = pre;
	     
	    printf(" %d",pre->data);	
	 }
	
		
    void add_number()
     {
     	
     	reverse();
     	struct node *ptr = head;
     	  int carry = 0 ;
		   	  printf("\nENTER NUMBER TO ADD : ");
				 scanf("%d",&carry);
				  
		   	   while(carry!=0)
		   	   {
				  
     	   ptr->data = ptr->data+carry;
     	   carry = ptr->data/10;
     	   ptr->data = ptr->data%10;
     	   ptr = ptr->next;
     	   
     	       }
     	      reverse();
     	       printf("\nADDITION COMPLETED : \n");	  
	 	
	
				     
	   }	
 int main()
  {
  	int choice = 0 ;
  	
  	while(1)
  		{
  		   printf("\n\nENTER 1 FOR INSERT : \nENTER 2 FOR DISPLAY :\nENTER 3 FOR DELETION : \nENTER 4 FOR INSERT : \nENTER 5 FOR REVERSE LINK : \n\nFIND MIDDLE TERM PRESS 6 : \nENTER 7 FOR ADDING : \nENTER 8 FOR REVERSE BY K : \n\n");
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
			 		printlist();
			 		break;
				 }
			 case 3:
			 	{
			 		deletion();
			 		break;
				 }
			 
			 case 4:
			 	{
			 		insert_btw();
			 		break;
				 }
				 
			case 5:
				{
					reverse();
					break;
				}
			case 6:
				{
					middle_term();
					break;
				}
				
			case 7:
				{
					add_number();
					break;
				}
			
			case 8:
			  {
			     reverse_k();
				 break; 	
			  }	
				
		}
  			
		}

  	
  	
  	getch();
  	return 0;
  }
