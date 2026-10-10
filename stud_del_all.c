#include "student.h"
void deleteall(ST **ptr)
{
	if(*ptr==0)
	{
		printf(RED"No records to delete\n"RESET);
		return;
	}
	ST *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf(GREEN"all nodes deleted successfully\n"RESET); 
}
