#include<stdio.h>
#include "student.h"
int main()
{
	ST *headptr=0; 
	char ch,op;
	stud_read(&headptr);
	while(1)
	{
		printf(YELLOW "******* STUDENT RECORD MENU ********\na/A : Add new record \nd/D : Delete a record \ns/S : Show the list \nm/M : Modify a record \nv/V : Save records\nt/T : Sort the list \nl/L : Delete all the records \nr/R : Reverse the list \ne/E : Exit \n"RESET);
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':
			case 'A': add_node(&headptr);  break;

			case 'd':
			case 'D': del_node(&headptr);  break;

			case 's':
			case 'S': printnodes(headptr);  break;

			case 'm':
			case 'M': modifyrecord(headptr); break;

			case 'v':
			case 'V': saveFile(headptr);   break;

			case 't':
			case 'T': sortdata(headptr);   break;
	
			case 'l':
			case 'L': deleteall(&headptr);  break;

			case 'r':
			case 'R': reverselink(&headptr);  break;

			case 'e':
			case 'E': printf(WHITE"S/s : Save and exit\nE/e : Exit without saving\n"RESET);
				  scanf(" %c",&op);
				  switch(op)
				  {
					case 's':
					case 'S': saveFile(headptr); exit(0); 
					case 'e':
					case 'E': exit(0);
				  }
			default: printf(REDBLINK"invalid choice\n"RESET);

		}	
	} 
} 
