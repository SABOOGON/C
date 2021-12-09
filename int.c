# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int age = get_int("What's your age?\n");
    printf("Your are at least %i days old.\n", age * 365);
}
