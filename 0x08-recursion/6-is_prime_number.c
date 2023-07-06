#include "main.h"
/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @k: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int k)
{
	if (k == 1)
	{
		return (1);
	}
	if (n % k == 0 && k > 0)
	{
		return (0);
	}
	return (actual_prime(n, k - 1));
}

/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
