#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
print("Size of a char; %lu byte(s)\n", (unsigned long)sizeof(d));
print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
