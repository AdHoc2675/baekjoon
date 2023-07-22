#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct numToStr{
    char str[100];
    int num;
} numToStr;

int compare(const void* a, const void* b) {
    const struct numToStr* str1 = (const struct numToStr*)a;
    const struct numToStr* str2 = (const struct numToStr*)b;

    return strcmp(str1->str, str2->str);
}

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);

    char * numDic[10] = { "zero" ,"one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine" };

    struct numToStr* numToStr = malloc(sizeof(struct numToStr) * (n - m + 1));

    for (int i = m; i <= n; i++) {
        if (i >= 10) {
            char temp[100];
            strcpy(temp, numDic[i / 10]);
            strcat(temp, numDic[i % 10]);
            strcpy(numToStr[i - m].str, temp);
            numToStr[i - m].num = i;
        }
        else {
            char temp[100];
            strcpy(temp, numDic[i % 10]);
            strcpy(numToStr[i - m].str, temp);
            numToStr[i - m].num = i;
        }
    }

    qsort(numToStr, n - m + 1, sizeof(struct numToStr), compare);

    for (int i = 0; i <= n - m; i++) {
        printf("%d ", numToStr[i].num);

        if (i % 10 == 9) {
            printf("\n");
        }
    }

    free(numToStr);

    return 0;
}