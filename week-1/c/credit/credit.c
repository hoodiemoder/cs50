#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long d13 = pow(10, 12);  // 13 digits
    long d14 = pow(10, 13);  // 14 digits
    long d15 = pow(10, 14);  // 15 digits
    long d16 = pow(10, 15);  // 16 digits
    long d17 = pow(10, 16);  // 17 digits

    long card_number = get_double("Number: ");

    if (card_number >= d13 && card_number < d14)
    {
        long first_number = card_number / d13;
        if (first_number == 4)
        {
            printf("Possible Visa\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (card_number >= d15 && card_number < d16)
    {
        if (card_number / d14 == 34 || card_number / d14 == 37)
        {
            printf("Possible American Express\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (card_number >= d16 && card_number < d17)
    {
        if (card_number / d16 == 4)
        {
            printf("Possible Visa.");
        }
        else if (card_number / d15 == (> 51 && < 56))
        {
            printf("Possible Mastercard.");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        // If the number doesn't match the number of digits, it is invalid.
        printf("INVALID\n");
    }
}