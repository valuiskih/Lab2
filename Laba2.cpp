//Ввести строку, заменить интервалы между словами на 2 пробела
#include <stdio.h>
int main()
{
	char m[1000];
	printf("Enter your string: \n");
	fgets(m, sizeof(m), stdin);
	int i = 0;
	int len = 0;
	while (m[i] != '\0')
	{
		len = i;
		if (len > 1000)
		{
			printf("\nERROR: array size exceeded");
			return -1;
		}
		else 
			while (!(((m[i] >= 'A') && (m[i] <= 'Z')) || ((m[i] >= 'a') && (m[i] <= 'z'))))
			{
				i++;
			}
			while (((m[i] >= 'A') && (m[i] <= 'Z')) || ((m[i] >= 'a') && (m[i] <= 'z')))
			{
				printf("%c", m[i]);
				i++;
			}
			printf("  ");
			i++;
	}
	return 0;
}