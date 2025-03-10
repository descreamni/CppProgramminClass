#include <stdio.h>
int main()
{
    /*Description
    These codes print a star character to debugger
    Using multi-for loop to make Right and showing the debugger.

    이 코드는 스타를 디버거창에 출력합니다
    멀티 루프를 돌려 정삼각형을 만들고 디버거에 보여줍니다.
    */

    for (int i =0;i < 4; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf(" *");
        };
        printf("\n");
    };

    system("pause");
    return 0;
}