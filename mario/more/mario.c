//Program that prints out a double half-pyramid of a specified height using hashes(#) for blocks

#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int height;
    int rows;
    int space;
    int hash;

    //prompt the user for valid input that is positive number and no greater than 23
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    // this loop creates the number of rows in the pyramid that is the user input
    for (rows = 0; rows < height; rows++)
    {
        //this loop creates the space before the hash for left pyramid
        for (space = (height - rows); space > 1; space--)
        {
            printf(" ");
        }
        //this loop prints the hashes (#) for the left pyramid
        for (hash = 1; hash <= (rows + 1); hash++)
        {
            printf("#");
        }
        //prints two space gap between the two pyramids
        printf("  ");

        //this loop prints the hashes(#) for the right pyramid
        for (hash = 1; hash <= (rows + 1); hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}