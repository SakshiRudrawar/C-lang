//pass by value
#include<stdio.h>
#include<string.h>

struct player
{
	char name[30];
	double matches;
	int wickets;
	int runs;
};

struct player storevalue(struct player);
void main()
{
	struct player p1;
	p1 = storevalue(p1);
	printf(" player name is %s\n matches played is %ld\n wickets is %d\n runs is %d\n",p1.name,p1.matches,p1.wickets,p1.runs);
}

struct player storevalue(struct player p)
{

	printf("Enter name:");
	scanf("%s", p.name);
	printf("Enter matches:");
	scanf("%ld",&p.matches);
	printf("Enter wickets");
	scanf("%d",&p.wickets);
	printf("Enter runs");
	scanf("%d",&p.runs);
	
	return p;
	
}