#include <stdio.h>
#include <cs50.h>

int get_times(void);
void print_uwu(int n);

int main(void)
{
    //Print text
    int n = get_times();
    print_uwu(n);
}


int get_times(void)
{
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
    for (int i = 0; i < n; i++)
    {
        printf("uwu\n");
    }
}