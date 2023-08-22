#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int a, b;
char temp;

a = 0;
b = strlen(s) - 1;

while (a < b)
{
temp = s[a];
s[a] = s[b];
s[b] = temp;
a++;
b--;
}

}
