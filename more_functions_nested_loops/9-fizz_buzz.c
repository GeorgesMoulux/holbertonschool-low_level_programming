#include "main.h"

/**
 * fizz_buzz - replace by fizz or buzz
 */

void fizz_buzz(void)
{
	int n;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char c[] = "FizzBuzz";

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("%s", c);
		else if (n % 3 == 0)
			printf("%s", a);
		else if (n % 5 == 0)
			printf("%s", b);
		else
			printf("%d", n);
	if ( n < 100)
	printf(" ");
	}
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
