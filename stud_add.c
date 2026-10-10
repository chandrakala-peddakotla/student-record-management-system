#include "student.h"
void add_node(ST **ptr)
{
	int num=1;
	ST *temp=*ptr;
	while(temp)
	{
		if(temp->rollno == num)
			num++;
		else if(temp->rollno > num)
			break;
		temp=temp->next;
	}
	ST *new;
	new=malloc(sizeof(ST));
	printf("enter student name and percentage\n");
	scanf("%s%f",new->name,&new->percentage);
	new->rollno=num;
	
	temp=*ptr;
	ST *prev=0;
	while(temp!=0 && (temp->rollno < new->rollno))
	{
		prev=temp;
		temp=temp->next;
	}
	new->next=temp;
	if(*ptr==0)
		*ptr=new;
	else
		prev->next=new;
	printf(GREEN"new record added successfully\n"RESET); 
}
