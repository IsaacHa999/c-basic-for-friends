#include <stdio.h>

int main(void)
{
    int math = 0;
    scanf("%d", &math);

    switch (math / 10)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    default:
        printf("F");
        break;
    }
}