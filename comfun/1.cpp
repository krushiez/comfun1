#include<stdio.h>
#include<conio.h>
int isPrime(int x);
int main()
{
	int y;
	scanf_s("%d", &y);
	if (isPrime(y))
		printf("%d is not prime", y);
	else
		printf("%d is prime", y);

	return 0;
}
int isPrime(int x)
{
	if ((x != 2 and x != 3 and x != 5 and x != 5) &&
		(x == 1 or x % 2 == 0 or x % 3 == 0 or x % 5 == 0 or x % 7 == 0))
		return 1;
	else
		return 0;
}