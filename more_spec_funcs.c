#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * binary_find - converts a string to binary
 * @n: input string
 * Return: binary string
 */
char *binary_find(va_list n)
{
	int i, j;
	int binaryNum[32], arg;
	char *binaryString;

	arg = va_arg(n, int);
	for (i = 0; arg > 0; i++, arg /= 2)
		binaryNum[i] = arg % 2;
	binaryString = malloc(i * sizeof(char));
	if (binaryString == NULL)
		return (NULL);
	for (j = 0, i -= 1; i >= 0; i--, j++)
		binaryString[j] = (binaryNum[i] + '0');
	return (binaryString);
}

/**
 * octal_find - converts decimal to octal numbers
 * @n: octal number to print
 * Return: pointer to string
 */
char *octal_find(va_list n)
{
	unsigned long int pos, temp, result, oct, i;
	char *string;

	oct = va_arg(n, unsigned long int);
	result = i = 0;
	pos = 1;
	while (oct)
	{
		result += (oct % 8) * pos;
		oct /= 8;
		pos *= 10;
		i++;
	}
	temp = i;
	pos /= 10;
	string = malloc(temp * sizeof(char) + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < temp; i++)
	{
		string[i] = ((result / pos) % 10) + '0';
			pos /= 10;
	}
	string[i] = '\0';
	return (string);
}


/**
 * hex_find - converts int to hex
 * @n: integer
 * Return: hex
 */
char *hex_find(va_list n)
{
	char *hexaDeciNum;
	unsigned int i, temp, arg, hold, size;

	arg = va_arg(n, unsigned int);

	for (hold = arg, size = 0; hold; hold /= 16)
		size++;
	hexaDeciNum = malloc((size + 1) * sizeof(char));
	if (hexaDeciNum == NULL)
		return (NULL);
	for (i = 0; arg; arg /= 16, i++)
	{
		temp = arg % 16;
		if (temp < 10)
			hexaDeciNum[i] = (temp + '0');
		else
			hexaDeciNum[i] = (temp + 'a' - 10);
	}
	return (rev_string(hexaDeciNum, _strlen(hexaDeciNum)));
}

/**
 * HEX_find - convert int to hex
 * @n: integer
 * Return: hex
 */
char *HEX_find(va_list n)
{
	char *hexaDeciNum;
	unsigned int i, temp, arg, hold, size;

	arg = va_arg(n, unsigned int);

	for (hold = arg, size = 0; hold; hold /= 16)
		size++;
	hexaDeciNum = malloc((size + 1) * sizeof(char));
	if (hexaDeciNum == NULL)
		return (NULL);
	for (i = 0; arg; arg /= 16, i++)
	{
		temp = arg % 16;
		if (temp < 10)
			hexaDeciNum[i] = (temp + '0');
		else
			hexaDeciNum[i] = (temp + 'A' - 10);
	}
	return (rev_string(hexaDeciNum, _strlen(hexaDeciNum)));
}
