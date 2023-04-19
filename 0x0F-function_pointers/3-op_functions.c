/**
 * op_add - addition
 * @a: number
 * @b: number
 * Return: numbers added
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: number
 * @b: number
 * Return: numbers subtracted
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a with b
 * @a: number
 * @b: number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: number
 * @b: number
 * Return: a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - modulus
 * @a: number
 * @b: number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
