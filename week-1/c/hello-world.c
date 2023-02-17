#include <stdio.h>
int main(void) {
    printf("Hello World!\n");

    // Idea: create a sentence with info from user input.
    // Age, Name, Favorite color.
    int age = get_int("How old are you?");
    printf("You're %i years old\n", age);
    // String
    //string name = get_string("What's your name?");
    //string color = get_string("Whats your favorite color?");

}