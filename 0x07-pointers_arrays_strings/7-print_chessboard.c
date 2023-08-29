#include "main.h"

/**
 * print_chessboard - Prints a chessboard as a 2D array of characters.
 * @a: Pointer to the 2D array (chessboard) to print.
 */

void print_chessboard(char (*a)[8])
{
int m, n;

for (m = 0; m < 8; m++)
{
for (n = 0; n < 8; n++)
{
putchar(a[m][n]);
}
putchar('\n');
}
}
