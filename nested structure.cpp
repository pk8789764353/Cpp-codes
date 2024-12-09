#include<stdio.h>
#include<string.h>

struct students
{
	char name[19];
	int rollno;
	struct marks
	{
		float percentage;
	}p;
	}q;
	int main()
	{ int n,r,p;
		cout("Enter the name and roll no.");
		cin("%s %d",q.name,&q.rollno);
	cout("Enter the percentage");
		cin("%f",&q.p.percentage);
	
		cout("name=%s roll no.=%d percentage=%f",q.name,q.rollno,q.p.percentage);
		return 0;
}
