//pass by value
#include<stdio.h>
#include<string.h>

struct time
{
	int hr;
	int min;
    int sec;
};

struct time storevalue(struct time);
void main()
{
	struct time t1;
	t1 = storevalue(t1);
	printf(" hr is %d min is %d sec is %d",t1.hr,t1.min,t1.sec);
}

struct time storevalue(struct time t)
{

	printf("Enter hour:");
	scanf("%d", &t.hr);
	printf("Enter minute:");
	scanf("%d",&t.min);
	printf("Enter second");
	scanf("%d",&t.sec);
	
	return t;
	
}