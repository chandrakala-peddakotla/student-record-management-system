#include "student.h"
void modifyrecord(ST *ptr)
{
	char ch,name[10];	
	printf(MAGENTA"Enter which record to search for modification\nR/r : Search by roll number\nN/n : Search by name\nP/p : Search by percentage\n"RESET);
	scanf(" %c",&ch);
	ST *temp=ptr, *t1;
	int num,c=0;
	float per;
	switch(ch)
	{
		case 'r':
		case 'R':printf("enter rollno to modify\n");
			 scanf("%d",&num);
			while(temp)
			{
				if(temp->rollno==num)
				{
					printf(CYAN"%d %s %f\n"RESET,temp->rollno,temp->name,temp->percentage);
					printf("new name and percentage\n");
					scanf("%s%f",temp->name,&temp->percentage);
					return ;
				}
				temp=temp->next;
			}
			printf(RED"record with rollno %d not found\n"RESET,num);
			 break;

		case 'n':
		case 'N': printf("enter name to search\n");
			  scanf("%s",name);
			while(temp)
			{
				if(strcmp(temp->name,name)==0)
				{
					c++;
					printf(CYAN"%d %s %f\n"RESET,temp->rollno,temp->name,temp->percentage);
				}
				temp=temp->next;
			}
			temp=ptr;
			if(c==0)
				printf(RED"record with name %s not found\n"RESET,name);
			else if(c==1)
			{
				while(temp)
				{
					if(strcmp(temp->name,name)==0)
					{
						printf("enter new name and percentage\n");
						scanf("%s%f",temp->name,&temp->percentage);
						return ;							
					}
					temp=temp->next;
				}
			}
			else if(c>1)
			{
				temp=ptr;
				int rn;
				printf("enter roll no of which record you want to change\n");
				scanf("%d",&rn);
				while(temp)
				{
					if(temp->rollno==rn)
					{
						printf("enter new name and percentage\n");
						scanf("%s%f",temp->name,&temp->percentage);
						return ;	
					}
					temp=temp->next;
				}
				printf(RED"%s with rollno %d not found\n"RESET,name,rn);
			}
			break;
		
		case 'p':
		case 'P':
			 printf("enter percentage to modify\n");
			 scanf("%f",&per);
			 while(temp)
			{
				if(temp->percentage==per)
				{
					printf(CYAN"%d %s %f\n"RESET,temp->rollno,temp->name,temp->percentage);
					c++;
				}
				temp=temp->next;
			}
			temp=ptr;
			if(c==0)
				printf(RED"record with %f percentage not found\n"RESET,per);
			else if(c==1)
			{
				while(temp)
				{
					if(temp->percentage==per)
					{
						printf("enter new name and percentage\n");
						scanf("%s%f",temp->name,&temp->percentage);
						return ;
					}
					temp=temp->next;
				}
			}
			else if(c>1)
			{
				int rn;
				printf("enter rollno of which record (above) you want to modify\n");
				scanf("%d",&rn);
				while(temp)
				{
					if(temp->rollno==rn)
					{
						printf("enter new name and percentage\n");
						scanf("%s%f",temp->name,&temp->percentage);
						return ;	
					}
					temp=temp->next;
				}
				printf(RED"record of %f with rollno %d not found\n"RESET,per,rn);	
			}
			break;

		default:printf(RED"invalid choice\n"RESET);
	}

}
