#include "main.h"

/**
 * jack_bauer - lists all minutes in a day
 *@:
 *Return: 0
 */
void jack_bauer(void)
{
	int hours;

	for (hours = 0; hours < 24;)
	{
		int minutes;

		for (minutes = 0; minutes < 60;)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
