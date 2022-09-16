#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size - size of the triangle to draw
 */

void print_triangle(int size)
{
	int height;
	int width;
	int draw;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');
		for (draw = 1; draw <= size; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
