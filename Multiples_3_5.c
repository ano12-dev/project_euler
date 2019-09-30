#include<stdio.h>
#include<string.h>

int function();

int main()
{
	int j;
	j = function();
	printf(" The sum of all multiples is: %d\n",j);
}

int function()
{
	int i,j;
	for(i=1;i<1000;i++)
	{
		if(i%3==0 || i%5==0)
		{
			j = i + j;
		}
	}
	return j;
}
