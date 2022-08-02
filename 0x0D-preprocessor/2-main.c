#include "main.h"
/**
 * main - prints name of the file followed by new line
 *
 */
void main()
{
	while(_FILE_ != '\0')
	{
		_putchar(_FILE_);
	}
	_putchar('\n');

}

