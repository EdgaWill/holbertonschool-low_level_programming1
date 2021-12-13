#include <unistd.h>
void first(void) __attribute__ ((constructor));

/**
 * first - function that prints
 */
void first(void)
{
	int a;
	char *b = "You're beat! and yet, you must allow,\n";
	char *c = "I bore my house upon my back!\n";

	for (a = 0; *(b + a); a++)
	{
		write(1, &(*(b + a)), 1);
	}
	for (a = 0; *(c + a); a++)
	{
		write(1, &(*(c + a)), 1);
	}
}
