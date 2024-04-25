//create a structure to specify data of students given below: Roll no , name , department , course , year of joining assume that 
//there are not more than 450 students 
//write a function to print names of all students who joined in a particular year 
//write a function to print the data of a student whose roll number is given 

#include <stdio.h>

struct student{
	int rollno;
	char name[30];
	char department[30];
	char course[10];
	int year;
	};


void printname(struct student s[],int, int );
void pp(struct student s[], int , int );

int main(){
	struct student s[450];
	
	int n;
	printf("Enter the number of student data you wanna import: ");
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++){
		printf("Enter the Roll no. of the student: ");
		scanf("%d",&s[i].rollno);
		getchar();
		printf("Enter the Name of the student: ");
		gets(s[i].name);
		printf("Enter the Department of the student: ");
		gets(s[i].department);
		printf("Enter the course of the student: ");
		gets(s[i].course);
		printf("Enter the year of the student: ");
		scanf("%d",&s[i].year);
		getchar();
		}
	int y , r;
	printf("Enter the Year and Roll Number for which data is to be shown: ");
	scanf("%d%d",&y,&r);
	printname(s,y,n-1);
	pp(s,r,n-1);
	
	return 0;
	}

void printname(struct student s[],int y,int i){
	
	if(i<0)
	return;
	
	else if(s[i].year == y)
	puts(s[i].name);
	
	printname(s,y,--i);
	}
void pp(struct student s[],int r, int i){
	
	if(i<0)
	return;
	
	if(s[i].rollno == r)
		printf("%d %s %s %s %d",s[i].rollno,s[i].name,s[i].department,s[i].course,s[i].year);
	
	pp(s,r,--i);
	}
	
	
	
	
	
