#include <stdio.h>
/*
원 둘레 계산기
2018.10.1.
by kis
*/
int main(void)
{
    int radius;
    int diameter;
    float pi;
    radius = 0;
    pi = 3.14;

    printf("Input radius(integer value) : ");
    // 반지름 입력
    scanf("%d", &radius);
    printf("radius = %d\n", radius);
    // 지름
    diameter = 2 * radius;
    printf("diameter = %d\n", diameter);
    // 원의 둘레
    printf("circumference = %f\n", 2 * pi * radius);

    return 0;
}