#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");
    
    if (s == t)
    //문자열을 비교하고싶다면 if (*s == *t) 로 작성해야 한다.
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");;
    }
}
