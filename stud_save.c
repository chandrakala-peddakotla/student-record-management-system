#include "student.h"
void saveFile(ST *ptr)
{
	FILE *fp=fopen("student.dat","w");
	ST *temp=ptr;
	if(ptr==0)
	{
		printf("no records to save into file\n");
		return;
	}
	while(temp)
	{
		fprintf(fp,"%d %s %f\n",temp->rollno,temp->name,temp->percentage);
		temp=temp->next;
	}
	printf(GREEN"records saved successfully\n"RESET);
	fclose(fp);
	
}
