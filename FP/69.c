#include <stdio.h>
int
main(void)
{
	char first, middle, last;
	int pennies,nickels,
		dimes,quarters,
		dollars,
		change,
		total_dollars,
		total_cents;
	
		printf("Type your 3 initials and press return : ");
		scanf("%c%c%c", &first,&middle,&last);
		printf("\n%c%c%c, please enter your coin information.\n",
				first,middle,last);
				
		printf("Number of $ Coins : ");
		scanf("%d",&dollars);
		printf("Number of Quarters : ");
		scanf("%d",&quarters);
		printf("Number of Dimes : ");
		scanf("%d",&dimes);
		printf("Number of Nickels : ");
		scanf("%d",&nickels);
		printf("Number of Pennies : ");
		scanf("%d",&pennies);
		
		total_cents  = 100*dollars+25*quarters+5*nickels+pennies;
		
		total_dollars = total_cents/100;
		change = total_cents % 100;
		
		printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d Cents\n",
				first,middle,last,total_dollars,change);
			
		return (0);
}
