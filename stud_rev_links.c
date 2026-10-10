#include "student.h"
void reverselink(ST **ptr)
{
	if(*ptr==0)
	{
		printf(RED"no records available\n");
		return ;
	}
	int i,c=countnode(*ptr);
	ST **a,*temp=*ptr;
	if(c>1)
	{
		a=malloc(sizeof(ST *)*c);
		for(i=0 ; i<c ;i++)
		{
			a[i]=temp;
			temp=temp->next;
		}
		for(i=c-1 ; i>0 ;i--)
		{
			a[i]->next=a[i-1];
		}
		a[0]->next=0;
		*ptr=a[c-1];
	}
	printf(GREEN"Links reversed successfully\n"RESET);

}
