#include <cs50.h>
#include <stdio.h>
int s;
int e;
int b;
int d;
int i;
int newS;
int yearAmount;
int get_size();
//int year();

int main()
{
    // TODO: Prompt for start size
    s = get_int("Start size: ");
    if (s < 9)
    {
        printf("Please enter a number greater than 9 \n");
    }
    /*else
    {
        while (s >= 9)
        {
            break;
        }
    }*/
    // TODO: Prompt for end size
    e = get_int("End size: ");
    if (e <= s)
    {
        printf("Please enter a number greater than %i \n", s);
    }
    /*else
    {
        while (e > 9)
        {
            break;
        }
    }*/

    get_size();
    //year();
    return 0;
}

// TODO: Calculate number of years until we reach threshold
int get_size()
{
    while (s < e)
    {
        printf("Years: %i\n", yearAmount);
        b = s / 3; // start size /  3 is born
        d = s / 4; // start size / 4 dies
        s + b - d;
        //once newS reaches e break the loop
        yearAmount++;

    }
    return 0;
}
// TODO: Print number of years

/*int year()
{
    printf("Years: %i\n", yearAmount);
    return 0;
}*/