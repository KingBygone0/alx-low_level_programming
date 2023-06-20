#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hr / 10 + 48);
			_putchar(hr % 10 + 48);
			_putchar('-');
			_putchar(min / 10 + 48);
			_putchar(min % 10 + 48);
			_putchar('\n');
		}
	}
}
