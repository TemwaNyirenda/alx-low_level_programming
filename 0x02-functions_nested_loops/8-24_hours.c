#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, 00:00 to 23:59
 *
 * Return: void - nothing
 */
void jack_bauer(void)
{
	int hours_tens, hours_units, mins_tens, mins_units;

	hours_tens = hours_units = mins_tens = mins_units = 0;

	while (hours_tens <= 2)
	{
		hours_units = 0;
		while (hours_units <= 9)
		{
			if (hours_tens == 2 && hours_units == 4)
			{
				break;
			}
			mins_tens = 0;
			while (mins_tens <= 5)
			{
				mins_units = 0;
				while (mins_units <= 9)
				{
					_putchar(hours_tens + '0');
					_putchar(hours_units + '0');
					_putchar(':');
					_putchar(mins_tens + '0');
					_putchar(mins_units + '0');
					_putchar('\n');
					mins_units++;
				}
				mins_tens++;
			}
			hours_units++;
		}
		hours_tens++;
	}
}
