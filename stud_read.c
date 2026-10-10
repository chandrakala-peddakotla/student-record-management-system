#include "student.h"
void stud_read(ST **ptr)
{
	FILE *fp=fopen("student.dat","r");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	}
	ST *new,*last;
	while(1)
	{
		new=malloc(sizeof(ST));
		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage)==-1)
			break;
		new->next=0;
		if(*ptr==0)
			*ptr=new;
		else
		{
			last=*ptr;
			while(last->next)
				last=last->next;
			last->next=new;
		}
	}

}
