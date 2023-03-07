#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Asks the user for their name
    string name = get_string("What's your name? ");
    // Greets the user by their name
    printf("hello, %s\n", name);
}