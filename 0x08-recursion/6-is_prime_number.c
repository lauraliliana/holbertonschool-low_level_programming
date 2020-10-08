/**
 * prime - checks if number is prime
 * @n: number
 * @m: divisor
 * Return: 1 or 0
 */
int prime(int n, int m)
{
	if (n < 2)
		return (0);
	if (m * m > n)
		return (1);
	return (n % m == 0 ? 0 : (prime(n, m + 1)));
}
/**
 * is_prime_number - returns 1 if the integer is a prime
 * @n: number
 * Return: 1 for true or 0.
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
