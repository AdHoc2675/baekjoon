#include <stdio.h>

int main()
{
    int testCase;

    scanf("%d", &testCase);

    float num;
    char operatorChar;

    for (int i = 0; i < testCase; i++) {
        scanf("%f", &num);

        while (1) {
            scanf("%c", &operatorChar);

            if (operatorChar == '\n') {
                break;
            }

            if (operatorChar == '@') {
                num = num * 3;
            }
            else if (operatorChar == '%') {
                num = num + 5;
            }
            else if (operatorChar == '#') {
                num = num - 7;
            }
        }
        
        printf("%.2f\n", num);
    }

    return 0;
}