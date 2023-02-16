#include <stdio.h>
/**
 * main - program entry point
 *
 * Description: reads and constructs a digit
 * Return: 0 always success
 */
int main(void)
{
	char ch;
	int num;

	printf("Type in your data and press Enter: ");
	ch = getchar();

	while (ch < '0' || ch > '9')
	{
		ch = getchar();
		int num = 0;
	}
	while (ch >= '0' && ch <= '9')
	{
		num = num * 10 + ch - '0';
		ch = getchar();
	}
	printf("The number is %d\n", num);
}

