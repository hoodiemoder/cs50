#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //While loop for meowing
    int i = 0;
    while (i < 3)
    {
        printf("Meow\n");
        i++;
    }

    //For loop for meowing 3 times
    for (int j = 0; j < 3; j++)
    {
        printf("Meow\n");
    }
}
