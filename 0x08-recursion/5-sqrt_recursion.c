/**
 * _sqrt_recursion - mnunction
 * square root of a number
 * @n: paramer value
 * Return: n
 */
int _sqrt_recursion(int n)
{
	int i;

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
