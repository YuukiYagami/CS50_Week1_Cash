#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int change, count = 0;
    do
    {
        change = get_int("Change owed: ");
    }
    while ((isdigit(change) || (change < 1)));

    do
    {
        // checks if more than 25 cents (quarter)
        if (change >= 25)
        {
            change -= 25;
        }
        // checks if between dime and quarter
        else if (10 <= change && change < 25)
        {
            change -= 10;
        }
        // checks if between nickle and dime
        else if (5 <= change && change < 10)
        {
            change -= 5;
        }
        else // below 5 means penny
        {
            change -= 1;
        }
        // counter to track how many change
        count++;
    }
    while (change != 0);
    printf("%i\n", count);
}
