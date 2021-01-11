#include<stdio.h>

int main()
{
    int height;
    int counter;
    int pyramid;
    int space;
    int x = 1;
    printf("Welcome to Mario World, let's build some pyramids\n");
    do
    {
        printf("Please enter the height\n");
        scanf("%i", &height);
    } 
    while (height <= 1);
    
    for (counter = 0; counter < height; counter++)
    {
        for (space = x; space < height; space++)
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
        pyramid = 0;
        x += 1;
    }
    // printf("%i", height);
}