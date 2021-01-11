#include<stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    int x = 0;
    while (x != 1)
    {
        int height;
        int counter;
        int pyramid;
        int space;
        int var = 1;
        int var_play_again = true;
        printf("\nWelcome to Mario World, let's build some pyramids\n");
        do
        {
            // var_play_again = true;
            height = 0;
            int user_input = get_int("Please enter the height\n");
            height += user_input;
        }
        while (height <= 1 || height > 8);

            for (counter = 0; counter < height; counter++)
            {
                for (space = var; space < height; space++)
                {
                    printf(" ");
                }
                for (pyramid = 0; pyramid <= counter; pyramid++)
                {
                    printf("#");
                }
                printf("  ");
                for (pyramid = 0; pyramid <= counter; pyramid++)
                {
                    printf("#");
                }
                printf("\n");
                var += 1; // Place holder to subtract the number of spaces against the blocks. e.g var = 1 heights = 6, so for every blocks the spaces should 6 - 1 = space
            }
            while(var_play_again == true)
            {
                string play = get_string("Do you want to continue? y/N\n "); // unabele to make "char play = char_get'...' " to work with if statement
                if (strcmp(play, "n") == 0 || strcmp(play, "N") == 0)
                {
                    x++;
                    var_play_again = false;
                }
                else if (strcmp(play, "y") == 0 || strcmp(play, "Y") == 0)
                {
                    var = 1;
                    var_play_again = false;
                }
                else
                {
                    printf("input Error, character not recognised\n");
                }
            }
    }


}