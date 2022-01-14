#include <stdio.h>

int main(void)
{
   char *s = "EMMA";
   printf("%p\n", s);
   printf("%p\n", &s[0]);
}
