#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	float percentage;
}p,q;
/*p,q;
int school(struct student d);*/
int main()
{
/*	strcpy(p.name,"Prakash");
	p.percentage=89.99;
	strcpy(q.name,"Piyush");
	q.percentage=88;
	school(p);
	school(q);
	//p=q;
	
	p.percentage=q.percentage;
	//p.name=q.name;
		cout("%s\n",p.name);
	cout("%f\n",p.percentage);
		cout("%s\n",q.name);
	cout("%f\n",q.percentage);*/
	cout("%d",sizeof(q));
	
	return 0;
}
/*int school(struct student d)
{
	cout("%s\n",d.name);
	cout("%f\n",d.percentage);
	cout("\t\n\n%d",sizeof(p));

}*/
