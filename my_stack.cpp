#include<stdio.h>
#include<stdlib.h>
int *array,size=0,top=-1;

int push()
{
	if(top==size-1)
	{
		printf("STACK OVERFLOW : ");
		return 0;
	}
	else
	{
		printf("ENTER ELEMENT TO PUSH IN STACK : ");
		top=top+1;
		scanf("%d",&array[top]);
		return 0;
	}
	return 0;
}
int pop()
{
	if(top==-1)
	{
		printf("STACK UNDER FLOW : ");
		return 0;
	}
	else
	{
		top=top-1;
		return 0;
	}
return 0;
}
int show()
{
	int i=0;
	if(top==-1)
	{
		printf("STACK EMPTY : ");
		return 0;
	}
	printf("STACK ELEMENTS ARE : \n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}
int main()
{
   int choice,i;
printf("ENTER SIZE OF STACK : ");
scanf("%d",&size);
array=(int*)malloc(size*sizeof(int));

while(1)
{
   printf("\n\nPRESS 1 FOR PUSH : \nPRESS 2 FOR POP : \nPRESS 3 FOR SHOW : \nPRESS 4 FOR EXIT : \n\nCHOOSE ANY ONE OPTION : ");
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
	  		
	  		show();
	  		break;
	    }
	  case 4:
	  {
	     exit(0);  	
	  }    
	  default:
	  	{
	  	   printf("ENTER VAILED CHOICE : ");
			 	
		}
	
   }	
}




return 0;
}
