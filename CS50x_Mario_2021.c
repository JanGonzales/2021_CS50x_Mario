#include<stdio.h>

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
        char play;
        printf("\nWelcome to Mario World, let's build some pyramids\n");
        do
        {
            printf("Please enter the height\n");
            scanf("%i", &height);
        } 
        while (height < 1 || height > 8 || height != 0);
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
            printf("Do you want to continue? y/N\n ");
            scanf("%s", &play);
            if (play == 'n' || play == 'N')
            {
                x++;
            }
            else
            {
                var = 1;
            } 
    }


}
