#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

void main()
{
	int s = 0, five = 0, three = 0, i;
	bool number = false;
		while (true)
		{
			printf("number greater than 7 and less than 10^9: ");
			scanf_s("%d", &s);
			if (s <= 7)
			{
				printf("read carefully, take one more chance \n");
				number = true;
			}
			else if (s >= 1000000000)
			{
				printf("read carefully, take one more chance \n");
				number = true;
			}
				else break;
		}
		i = s;
		while (i > 0)
		{
			if (i % 5 == 0)
			{
				five = i / 5;
				break;
			}
			++three;
			i -= 3;
		}
		printf("number of threes: ");
		printf("%d", three);
		printf("\nnumber of fives: ");
		printf("%d\n", five);
}