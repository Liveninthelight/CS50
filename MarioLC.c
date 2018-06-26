#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int n;


    do
    {
        printf("Give me an Integer ");
        n = get_int();
    }
    while (n < 0 || n > 23);


    for (int line = 0; line < n; line++)
    {
        for (int spaces = n - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}