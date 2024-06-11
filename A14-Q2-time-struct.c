#include<stdio.h>

struct time
{
	int hour, sec, min;
};

void main()
{
	struct time t1,t2,t3;
	
	printf("enter hour:");
	scanf("%d",&t1.hour);	
	printf("enter minutes");
	scanf("%d",&t1.min);	
	printf("enter seconds");
	scanf("%d",&t1.sec);
	
	printf("enter hour:");
	scanf("%d",&t2.hour);	
	printf("enter minutes");
	scanf("%d",&t2.min);	
	printf("enter seconds");
	scanf("%d",&t2.sec);
	
	int sec1 = t1.hour*3600 + t1.min*60 + t1.sec;
	int sec2 = t2.hour*3600 + t2.min*60 + t3.sec;
    int sec3 = sec1 + sec2;
    
    t3.hour = sec3/3600;
    int min3 = sec3%3600;
    t3.min=min3/60;
    int secc = min3%60;
    t3.sec= secc/60;
    
    
    
    printf("\nHours = %d",t3.hour);
    printf("\nMinutes =%d", t3.min);
    printf("\nSeconds =%d", t3.sec);
	
}



















