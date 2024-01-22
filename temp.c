#include <stdio.h>
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
    char ch = 'a';
    int in = 'a';
    printf("ch = %c, in = %d\n", ch, in);
    printBits(&ch, sizeof(ch));
    printBits(&in, sizeof(in));
    // printBits('a', sizeof(in));

    return 0;
}