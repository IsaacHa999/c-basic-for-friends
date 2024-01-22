#include <stdio.h>
int main(void)
{
    printf("** 기본 자료형의 크기**\n");
    printf("char: %3lu byte  \n", sizeof(char));
    printf("short: %3lu byte  \n", sizeof(short));
    printf("int: %3lu byte  \n", sizeof(int));
    printf("long: %3lu byte  \n", sizeof(long));
    printf("long long: %3lu byte  \n", sizeof(long long));
    printf("float: %3lu byte  \n", sizeof(float));
    printf("double: %3lu byte  \n", sizeof(double));
}