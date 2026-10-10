#include "student.h"
void del_node(ST **ptr)
{
	char ch,name[10];
	int rn,c=0,num;
	ST *temp=*ptr,*prev;
	printf("if you want delete by rollno ,enter r/R\nif you want delete by name ,enter n/N\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'r':
		case 'R': printf("enter rollno to delete : ");
			scanf("%d",&rn);
			while(temp)
			{
				if(temp->rollno == rn)
				{
					if(temp==*ptr)
						*ptr=temp->next;
					else
						prev->next=temp->next;
					free(temp);
					printf(GREEN"record with rollno %d deleted successfully\n"RESET,rn);
					return;
				}
				prev=temp;
				temp=temp->next;
			}
			printf(RED"record with rollno %d not found\n"RESET,rn);
			break;
		
		case 'n':
		case 'N':printf("enter name to delete: ");
			 scanf("%s",name);
			 while(temp)
			 {
				if(strcmp(temp->name,name)==0)
					c++;	        //counting no of nodes				
				temp=temp->next;
			 }
			temp=*ptr,prev=0;
			if(c==0)
			{
				printf(RED"record with name %s not present\n"RESET,name);  //no record
				return;
			}
			else if(c==1) //only 1 record is there
			{
				 while(temp)
				 {
					if(strcmp(temp->name,name)==0)
					{
						if(temp==*ptr)
							*ptr=temp->next;
						else
							prev->next=temp->next;
						free(temp);
						printf(GREEN"record with name %s deleted successfully\n"RESET,name);
						return;				
					}
					prev=temp;
					temp=temp->next;
				 }	 
			}
			
			else if(c>1)  //more than 1 record
			{				
				while(temp)
				{
					if(strcmp(temp->name,name)==0)
						printf(CYAN"%d %s %f\n"RESET,temp->rollno,temp->name,temp->percentage);
					temp=temp->next;
				}
				printf("enter rollno of which record (above) you want to delete\n");
				scanf("%d",&num);
				temp=*ptr ,prev=0;
				while(temp)
				{
					if(temp->rollno==num && strcmp(temp->name,name)==0)
					{
						if(temp==*ptr)
							*ptr=temp->next;
						else
							prev->next=temp->next;
						free(temp);
						printf(GREEN"record with name %s and rollno %d is deleted successfully\n"RESET,name,num);
						return;
					}
					prev=temp;
					temp=temp->next;
				}
				printf(RED"record with name %s and rollno %d not available\n"RESET,name,num);
			}
			break;
		default:printf(RED"invalid choice\n"RESET);
	
	}
}
