#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	float percentage;
}a[10];
int main()
{
	strcpy(a[0].name,"Prakash");
	a[0].percentage=89.99;
	strcpy(a[1].name,"Piyush");
	a[1].percentage=88;
	cout("%s\n",a[0].name);
	cout("%f\n",a[0].percentage);
	cout("%s\n",a[0].name);
	cout("%f\n",a[0].percentage);
	return 0;
}
