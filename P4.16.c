// #include <stdio.h>
// int main(void)
// {
//     int opd1, opd2;
//     char op;

//     print("수식을 입력하세요 : ");
//     scanf("%d", &opd1);
//     while ((op = getchar()) == ' ')
//         ;
//     scanf("%d", &opd2);

//     swich(op)
//     {
//     case '+':
//         printf("%d + %d = %d\n", opd1, opd2, opd1 + opd2);
//         break;
//     case '-':
//         printf("%d - %d = %d\n", opd1, opd2, opd1 - opd2);
//         break;
//     case '*':
//         printf("%d * %d = %d\n", opd1, opd2, opd1 * opd2);
//         break;
//     case '/':
//         printf("%d / %d = %d\n", opd1, opd2, opd1 / opd2);
//         break;
//     case '%':
//         printf("%d %% %d = %d\n", opd1, opd2, opd1 % opd2);
//         break;
//     default:
//         printf("잘못된 연산자입니다.\n");
//     }
//     return 0;
// }