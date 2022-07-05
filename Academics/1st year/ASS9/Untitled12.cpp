#include<stdio.h>
typedef struct{ 
char First[10];
char Middle[10];
char Last[10];}
Name;
typedef struct{
int day;int month;int year;
}DOB;
typedef struct{
int Eng;int Maths;int CS;
}Marks;// Structure of Structures
typedef struct{ 
int id;
Name Nm;
char gd;
DOB db;
Marks Mks;}
Student;
int main(){Student S[3];int i,p;char myname[20];
//Reading value in structure Name  
for(i=0;i<3;i++)
{
printf("Enter information for %d Student:\n",i+1);
printf("Enter Students id:");
scanf("%d",&S[i].id);
puts("First Name:");
fflush(stdin);
gets(S[i].Nm.First);
fflush(stdin);
puts("Middle Name:");
gets(S[i].Nm.Middle);
fflush(stdin);
puts("Last Name:");
gets(S[i].Nm.Last);
printf("Enter Gender(F/M/O):");
scanf(" %c",&S[i].gd);
printf("Enter DoB(DD MM YY Format):");
scanf("%d",&S[i].db.day);
scanf("%d",&S[i].db.month);
scanf("%d",&S[i].db.year);
printf("Enter Students Marks (Eng Maths CS):\n");
scanf("%d",&S[i].Mks.Eng);
scanf("%d",&S[i].Mks.Maths);
scanf("%d",&S[i].Mks.CS);
}
printf("\nPrinting value of the student database:\n");
for(i=0;i<3;i++)
{
printf("Information for %d Student:\n",i+1);
printf("Id:%d ",S[i].id);
printf("Name:%s %s %s ",S[i].Nm.First, S[i].Nm.Middle, S[i].Nm.Last);
printf("Gender:%c ",S[i].gd);
printf("DoB:%d %d %d ",S[i].db.day,S[i].db.month,S[i].db.year);
printf("Marks (Eng Maths CS):%d %d %d",S[i].Mks.Eng,S[i].Mks.Maths,S[i].Mks.CS);
printf("\n");}
printf("Enter student id you want to search:");
scanf("%d",&p);
for(i=0;i<3;i++)
{
if(p==S[i].id) 
{
printf("Information for %d Student:\n",i+1);
printf("Id:%d ",S[i].id);
printf("Name:%s %s %s ",S[i].Nm.First, S[i].Nm.Middle,S[i].Nm.Last);
printf("Gender:%c ",S[i].gd);
printf("DoB:%d %d %d ",S[i].db.day,S[i].db.month,S[i].db.year);
printf("Marks(Eng Maths CS):%d %d%d", S[i].Mks.Eng, S[i].Mks.Maths, S[i].Mks.CS);
printf("\n");
break;
return 0;
}}}

