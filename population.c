#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Starting population: ");
    }
    while (x < 9);

    int y;
    do
    {
        y = get_int("Ending population: ");
    }
    while (y < x);

    //Number of years
    int years = 0;

    //update population
    while (x < y)
    {
        x = x + (x / 3) - (x / 4);
        years++;
    }
    //print years
    printf("Years: %i\n", years);
}
