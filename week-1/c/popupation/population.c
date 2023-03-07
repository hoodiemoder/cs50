#include <stdio.h>
#include <cs50.h>

int get_n(void)  // Get starting size for population input, should be at least 9.
{
    int n;
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);
    return n;
}

int get_end_n(int n)  // Get ending size population input, should be greater than starting size.
{
    int end_n;
    do
    {
        end_n = get_int("End size: ");
    }
    while (end_n < n);
    return end_n;
}

int growth(int n, int end_n)  // Function which calculates the years needed to reach ending population.
{
    int growth, decline, years = 0;
    while (n < end_n)
    {
        growth = n / 3;
        decline = n / 4;
        n = n + growth - decline;  // x = x + (x / 3) - (x / 4)
        years++;
    }
    return years;
}

int main(void)
{
    // Input
    int n = get_n();
    int end_n = get_end_n(n);
    // Algorithm
    int years = growth(n, end_n);
    // Output
    printf("Years: %i\n", years);
}