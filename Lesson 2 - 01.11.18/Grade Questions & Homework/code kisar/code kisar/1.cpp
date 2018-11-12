#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define s 150
void kisar(char *alpha, char *str)
{
	int i,j;
	puts(str);
	for (i = 0; i < strlen(str); i++)
	{
		if (isalpha(*(str + i)))
		{
			for (j = 0; j < 26; j++)
			{
				if (*(str + i) == *(alpha + j) || *(str + i) == *(alpha + j) - 32)
				{
					if (j < 5)
						*(str + i) = *(alpha + j - 5+26);
					else
						*(str + i) = *(alpha + j - 5);

				}
			}
		}
	}
	puts(str);
}
void main()
{
	char alpha[27] = { "abcdefghijklmnopkrstuvwxyz" };
	char str[s] = { "yt gj tw sty yt gj, ymfy nx ymj vzjxynts" };
	kisar(alpha, str);
	getchar();
	getchar();

}
