//Program that reports a user’s water usage, converting minutes spent in the shower to bottles of drinking water
//for calculation we consider 1 minute shower consumes 12 bottles of water

#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int minutes;
    int bottles;

    //Prompt user for a positive number
    do
    {
        minutes = get_int("Minutes: ");
    }
    while (minutes <= 0);

    bottles = minutes * 12;

    printf("Bottles: %i\n", bottles);
}