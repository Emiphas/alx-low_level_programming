#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';

	while(c <= 'z' || c <= 'Z'){
		if(c <= 'z'){
			putchar(c);
		} else{
			putchar(c + 'a' - 'A');
		}
		c++;
	}
	return (0);
}
