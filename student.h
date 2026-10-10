#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[1;37m"
#define REDBLINK "\033[1;31;5m"

typedef struct student
{
	int rollno;
	char name[50];
	float percentage;
	struct student *next;
}ST;

void add_node(ST **);
void printnodes(ST *);
int getNextRoll(ST *);
void del_node(ST **);
void modifyrecord(ST *);
void saveFile(ST *);
void sortdata(ST*);
void deleteall(ST **);
int countnode(ST *);
void delere_all(ST **);
void reverselink(ST **);
void stud_read(ST **);
