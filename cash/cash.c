//program that calculates the minimum number of coins required to give a user change

#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float changeAmount;
    int coin_count = 0;

    //prompt the user for valid input that is positive number
    do
    {
        changeAmount = get_float("Change owed: ");
    }
    while (changeAmount < 0);

    //Convert dollar to cents $1 = 1 * 100 = 100cents and round it to whole integer
    int change = round(changeAmount * 100);

    //printf("Converted to cents: %i\n", change);

    while (change >= 25)
    {
        coin_count++;
        change = change - 25;
    }
    while (change >= 10)
    {
        coin_count++;
        change = change - 10;
    }
    while (change >= 5)
    {
        coin_count++;
        change = change - 5;
    }
    while (change >= 1)
    {
        coin_count++;
        change = change - 1;
    }
    printf("%i\n", coin_count);
}