#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: pointer to number changed
 * @index: index of bit cleared
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
