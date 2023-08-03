/**
 * is_divisible - Check if the number is divisible
 * @n: The number to check if it is divisible
 * @div: The divisor
 *
 * Return: If the number is not divisible - 1,
 *	   If the number is divisible - 0
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (is_divisible(n, div + 1));
}
/**
 * is_prime_number - Check if the number is prime
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n < 2)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (is_divisible(n, div));
}
