#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("To update system you will consume 10GiB of data")

    char c = get_char("Do you agree? [Y/n]\n");

    if (c == 'Y' || 'y' || '');
    {
        printf("Updating...");
    }
    else if (c == 'N' || 'n');
    {
        printf("Operation aborted.");
    }
    else
    {
        printf("Error, please try again");
    }

}
