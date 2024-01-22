#include <stdio.h>

// 자료형의 비트를 출력하는 함수
void printBits(void *ptr, size_t size)
{
    unsigned char *byte = (unsigned char *)ptr;

    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 7; j >= 0; j--)
        {
            printf("%d", (byte[i] & (1 << j)) ? 1 : 0);
        }
        printf(" "); // 8 비트마다 공백 추가
    }

    printf("\n");
}

int main(void)
{
    int num = 2;
    float floatNum = 2.0;
    char character = 'A';

    printf("Binary representation of int 2: ");
    printBits(&num, sizeof(num));

    printf("Binary representation of float 2.0: ");
    printBits(&floatNum, sizeof(floatNum));

    printf("Binary representation of char  A: ");
    printBits(&character, sizeof(character));

    return 0;
}
