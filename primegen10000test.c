#include <math.h>
#include <stdio.h>
#include <time.h>


int isPrime(int val)
{
	if (val==3 || val==2)
	{
		return 1;
	}
	if (val%2==0)
	{
		return 0;
	}
	int count = 3;
	double max;
	double dval = (double)(val);
	max = sqrt(dval);
	while(max > count)
	{
		if(val%count==0)
		{
			return 0;
		}
		count = count + 2;
	}
	return 1;
}

void writeToEndOfFile(int val)
{

}

int getLastLineOfFile()
{

}

int main()
{
	time_t start = time(0); 
	printf("2");
	printf("\n3\n5\n7\n");
	int num = 9;
	while(num < 10000000)
	{
		if(isPrime(num)==1)
		{
			printf("%d",num);
			printf("\n");
		}
		num = num + 2;
	}
	time_t end = time(0);

	printf("%lf",difftime(end, start));
}
