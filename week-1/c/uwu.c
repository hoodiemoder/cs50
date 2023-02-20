#include <stdio.h>
#include <cs50.h>

int get_times(void);
void print_uwu(int n);

int main(void)
{
    // Prints text.

    int n = get_times();
    print_uwu(n);
}

int get_times(void)
{
    // Gets a positive integer for repetitions.
    int i;
    do
    {
        i = get_int("How many times?\n");
    }
    while (i < 1);
    return i;
}

void print_uwu(int n)
{
    // Given the repetitions print uwu that many times.
    for (int i = 0; i < n; i++)
    {
        printf("uwu\n");
    }
}
