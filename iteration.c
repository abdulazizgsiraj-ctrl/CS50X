#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("height: ");

    draw(height);
}

void draw(int n)
{
    // for each row of pyramid
    for (int i = 0; i < n; i++)
    {
        // for each column in the row
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
