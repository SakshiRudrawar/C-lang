//Plyaer pass by address 


#include<stdio.h>
#include<string.h>

struct player
{
	char name[20];
	double matches;
	int wickets;
	int runs;
};

void storeplayer(struct player*);
void main()
{
	struct player this;
	storeplayer(&this);
	
	printf("player details: \n name is: %s\n matches : %ld\n wickets is %d\n runs is:%d\n",this.name, this.matches,this.wickets,this.runs);
}

void storeplayer(struct player*this)
{
	printf("enter the name ");
	scanf("%s", &this->name);
	printf("enter the matches");
	scanf("%ld", &this->matches);
	printf("enter wickets");
	scanf("%d", &this->wickets);
	printf("Enter runs");
	scanf("%d\n",&this->runs);
}