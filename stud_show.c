#include "student.h"
void printnodes(ST *ptr)
{
	if(ptr==0)
	{
		printf(REDBLINK"NO RECORDS AVAILABLE\n"RESET);
		return;
	}
	printf(WHITE"-------------------------------------------\n"RESET);
	printf(CYAN"Roll No	Name		Percentage\n"RESET);
	printf(WHITE"-------------------------------------------\n"RESET);
	while(ptr)
	{
				
		printf(CYAN"%d   	%s     	%f\n"RESET,ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}

}
