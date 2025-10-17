#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char str1[20], str2[20], str3[20];
    int ansnum = 0;

    scanf("%s %s %s", str1, str2, str3);

    if (isdigit(str1[0]))
    {
        ansnum = atoi(str1) + 3;
    }
    else if (isdigit(str2[0]))
    {
        ansnum = atoi(str2) + 2;
    }
    else if (isdigit(str3[0]))
    {
        ansnum = atoi(str3) + 1;
    }

    if (ansnum % 3 == 0 && ansnum % 5 == 0)
    {
        printf("FizzBuzz");
    }
    else if (ansnum % 3 == 0)
    {
        printf("Fizz");
    }
    else if (ansnum % 5 == 0)
    {
        printf("Buzz");
    }
    else
    {
        printf("%d", ansnum);
    }

    return 0;
}
