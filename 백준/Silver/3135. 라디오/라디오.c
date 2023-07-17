#include <stdio.h>

int main()
{
    int Afrequency, Bfrequency;
    int numOfStoredFrequency;

    scanf("%d %d", &Afrequency, &Bfrequency);
    scanf("%d", &numOfStoredFrequency);

    int buttonCount[6] = { 9999 , };

    if (Afrequency - Bfrequency > 0) {
        buttonCount[0] = Afrequency - Bfrequency;
    }
    else {
        buttonCount[0] = Bfrequency - Afrequency;
    }

    for (int i = 1; i < numOfStoredFrequency + 1; i++) {
        int input;
        scanf("%d", &input);

        if (input - Bfrequency > 0) {
            buttonCount[i] = input - Bfrequency + 1;
        }
        else {
            buttonCount[i] = Bfrequency - input + 1;
        }
    }

    int min = 1000;

    for (int i = 0; i < numOfStoredFrequency + 1; i++) {
        if (min > buttonCount[i]) {
            min = buttonCount[i];
        }
    }

    printf("%d", min);

    return 0;
}