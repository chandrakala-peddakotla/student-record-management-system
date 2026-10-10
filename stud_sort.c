#include "student.h"
void sortdata(ST *ptr)
{
	ST *temp=ptr;
	char ch;
	printf("N/n : Sort with name\nP/p : Sort with percentage\n");
	scanf(" %c",&ch);
	int i,j,c;
	ST *p1=ptr,*p2,t;
	switch(ch)
	{
		case 'n':
		case 'N':
			if(ptr==0)
			{
				printf(RED"no records to sort\n"RESET);
				return;
			} 
			c=countnode(ptr);
			for(i=0;i<c-1;i++)
			{
				p2=p1->next;				
				for(j=0;j<c-1-i;j++)
				{
					if(strcmp(p1->name,p2->name)>0)
					{
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.percentage=p1->percentage;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->percentage=p2->percentage;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
				 		p2->percentage=t.percentage;

					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			printf(GREEN"successfully sorted by name\n"RESET);
			break;
	
		case 'p':
		case 'P':
			if(ptr==0)
			{
				printf(RED"no records to sort\n");
				return;
			} 
			c=countnode(ptr);
			for(i=0;i<c-1;i++)
			{
				p2=p1->next;				
				for(j=0;j<c-1-i;j++)
				{
					if(p1->percentage < p2->percentage)
					{
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.percentage=p1->percentage;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->percentage=p2->percentage;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
				 		p2->percentage=t.percentage;

					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			printf(GREEN"successfully sorted by percentage\n"RESET);
			 break;
		
		default: printf(RED"invalid choice\n"RESET);
	}
	
}
int countnode(ST *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}
