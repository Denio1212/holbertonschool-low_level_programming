#include <stdio.h>


/**
 * main - prints the alphabet in lowercase,
 * except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char qe = 'a';

	while (qe <= 'z')
	{
		if (qe != 'e' && qe != 'q')
		{
			putchar(qe);

		}
		qe++;
	}
	putchar('\n');

	return (0);
}
/* I've selected that qe contain variable a */
/* While the letters are progressing I have ruled out q and e */
