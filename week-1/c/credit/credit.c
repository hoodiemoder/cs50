#include <stdio.h>
#include <math.h>
#include <cs50.h>

bool lunhs(int digits, int number_array[], bool valid)
{
    int odd = 0;
    int even = 0;
    int even_array[digits];
    int carry = 0;
    for (int i = 1; i <= digits; i++)
    {
        if (i % 2 == 0)
        {
            even_array[i/2] = number_array[i] *= 2;
        }
        else
        {
            odd += number_array[i];
        }
    }
    for (int i = 1; i < digits; i++)
    {
        if (even_array[i] >= 10)
        {
            carry += 1;
            even_array[i] = even_array[i] % 10;
            even += even_array[i];
        }
        else
        {
            even += even_array[i];
        }
    }

    // Debug: Prints the content of the even_array.
    //for (int i = 1; i <= digits / 2; i++)
    //{
    //    printf("even_array[%i]:%i\n", i, even_array[i]);
    //}

    int sum = even + odd + carry;
    printf("sum: %i even: %i odd: %i carry: %i\n", sum, even, odd, carry);

    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    string brand;
    bool valid = false;
    // Gets user's credit card number.
    long card_number = get_long("Card number: ");

    // Create an array for storing credit card number.
    int digits = floor(log10(card_number) + 1);
    int number_array[digits];

    for (int i = 1; i <= digits; i++)
    {
        number_array[i] = card_number % 10;
        card_number /= 10;
    }

    // Debug: Prints the content of the array.
    //for (int i = 1; i <= digits; i++)
    //{
    //    printf("number_array[%i]:%i\n", i, number_array[i]);
    //}

    // Switch case for different card lenght.
    switch (digits)
    {
        case 13:
            if (number_array[13] == 4)
            {
                brand = "VISA";
                valid = lunhs(digits, number_array, valid);
                if (valid == true)
                {
                    printf("%s\n", brand);
                    break;
                }
            }
        case 15:
                if (number_array[15] == 3)
                {
                    if (number_array[14] == 4 || number_array[14] ==  7)
                    {
                        brand = "AMEX";
                        valid = lunhs(digits, number_array, valid);
                        if (valid == true)
                        {
                            printf("%s\n", brand);
                            break;
                        }
                    }
                }
        case 16:
            if (number_array[16] == 4)
            {
                brand = "VISA";
                valid = lunhs(digits, number_array, valid);

                if (valid == true)
                {
                    printf("%s\n", brand);
                    break;
                }
            }
            else if (number_array[16] == 5)
            {
                if (number_array[15] >= 1 && number_array[15] <= 5)
                {
                    brand = "MASTERCARD";
                    valid = lunhs(digits, number_array, valid);

                    if (valid == true)
                    {
                        printf("%s\n", brand);
                        break;
                    }
                }
            }
        default:
            if (valid == false)
            {
            printf("INVALID\n");
            }
    }
}

