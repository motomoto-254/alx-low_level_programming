#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input to find square root
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0, n));
}

/**
 * _sqrt - helper function which is called indirectly
 * @n: the number to be squarerooted
 * @low: int to find possible range of sqrt
 * @high: int to find possible range of sqrt
 *
 * Return: solution
 */

int _sqrt(int n, int low, int high)
{
	int mid, square, result;

	result = 0;
	if (low > high)
	{
		return (-1);
	}

	mid = (high + low) / 2;
	square = mid * mid;
	if (square == n)
	{
		result = mid;
		return (result);
	}
	else if (square > n)
	{
		result = _sqrt(n, low, mid - 1);
		return (result);
	}
	else if (square < n)
	{
		result = _sqrt(n, mid + 1, high);
		return (result);
	}
	return (result);
}

