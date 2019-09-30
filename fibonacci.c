#include<stdio.h>
#include<string.h>

int main()
{
	long long int current=1,before=0,after=0;
	long long total=0;
	while(after<=4000000)
	{
		after = before + current;
		if(after%2==0) total = total + after;
		// printf("%d\t",after);
		before = current;
		current = after;
	}
	// printf("\n\n");
	printf("The total of the fibo series is: [ %lld]\n\n",total);
	return 0;
}
