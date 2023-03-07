#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Gets user input for pyramid's height.
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ((height < 1) || (height > 8));

    // For loop starting at height 1
    // and stops when i reaches height.
    for (int i = 1; i <= height; i++)
    {
        // For loop that prints the spaces.
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // For loop that prints the hashes.
        for (int k = 0; k < i ; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}