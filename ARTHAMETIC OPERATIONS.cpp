#include<stdio.h>
int x,n;
int add (x ,n )
{
	return x+n;
}
int sub(x,n)
{
	return x-n;
}
int mul(x,n)
{
	return x*n;
}
int div(x,n)
{
	return x/n;
}
int power(x,n)
{
	if(n==0)
	return 1;
	else if(n%2==0)
	return power(x,n/2)*power(x,n/2);
	else
	return x*power(x,n/2)*power(x,n/2);
}
int main()
{
	int choice;
	printf("enter the value of x=");
	scanf("%d",&x);
	printf("enter the value of n=");
	scanf("%d",&n);
	printf("enter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\npower of two given numbers=%d\n",power(x,n));
	}
	else if(choice==2)
	{
		printf("\naddition=%d\n",add(x,n));
	}
	else if(choice==3)
	{
		printf("\nsubstraction=%d\n",sub(x,n));
	}
	else if(choice==4)
	{
		printf("\nmultiplication=%d\n",mul(x,n));
	}
	else if(choice==5)
	{
		printf("\ndivision=%d\n",div(x,n));
	}
	else
	{
		printf("invalid context");
	}
	return 0;
}