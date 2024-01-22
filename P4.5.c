#include <stdio.h>
int main(void)
{
    int i = 1, sum = 0, n = 10;

    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf("1부터 %d까지의 홀수의 합은 %d입니다.\n", n, sum);
    return 0;
}