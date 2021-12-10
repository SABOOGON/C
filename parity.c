#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");
    
    // 2를 나눠서 0이라면 짝수
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    // 2를 나눠서 1이라면 홀수지만, 짝수가 아닌 수는 모두 홀수임으로 생략
    else
    {
        printf("odd\n");
    }
}

