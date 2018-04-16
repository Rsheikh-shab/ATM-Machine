#include<stdio.h>

int main()
{
	int balance=20;int pin=3312;int tmpin;int another_transaction=1; // do another_transaction,2 no, not another action

	printf("Please enter your pin:");
	scanf("%d", &tmpin);

	if(pin!=tmpin)
	{
		printf("\nInvalid Pin.");
		return 0;
	}
	while(another_transaction==1)
	{
	int option;

	printf("\nWhat do you want to do?:\n");
	printf("1- Check your balance\n");
	printf("2- Deposit\n");
	printf("3- Withdraw\n");
	scanf("%d", &option);

	if(option==1) // balance check
	{
		printf("Your balance is: $%d", balance);
	}
	else if(option==2) // deposit
	{
		int amount_deposit;
		printf("\nHow much money do you want to deposit: $");
		scanf("%d", &amount_deposit);

		if(amount_deposit >0)
		{
			balance= balance+amount_deposit;
	    }
		else{
			printf("\nInvalid amount deposit");
		}
}
	else if(option ==3) // withdraw
	{
		int amount_withdraw;
		printf("\nHow much money do you want to withdraw: $");
		scanf("%d", &amount_withdraw);

		if(amount_withdraw <=balance && amount_withdraw %20==0)
		{

		balance= balance-amount_withdraw;
		}
		else
		{
			if(amount_withdraw> balance)
			{
				printf("\nYou do not have enough money.Declined.");
			}
			else
			{
				printf("\nYour balance can not be less then 20");
			}
		}
	}
	else{
		printf("\nInvalid Transaction.");
	}

	another_transaction=0;

	while(another_transaction !=1 && another_transaction !=2)
	{

		printf("\nDo you want to do another transaction:");
		printf("1-yes, 2-no\n");
		scanf("%d", &another_transaction);
		if(another_transaction==2)
        {
            printf("\nTHANK YOU");
        }
	}
}
	return 0;
}
