#include<stdio.h>
#include<string.h>

void func(long long int);
int main()
{
	long long int number;
	printf(" Enter the number: ");
	scanf("%llu",&number);
	func(number);

}

void func(long long int number)
{
	long long int i=2,temp;
	temp = number;
	while(i<temp)
	{
		if(number%i==0)
		{
			printf(" %lld\t",i);
			number = number/i;
			i++;
		}
		else
		{
			i++;
		}

	}
	printf("\n");
}
