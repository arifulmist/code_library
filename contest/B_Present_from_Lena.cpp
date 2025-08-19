#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int spaces = n;
    
    // Upper part of the pattern
    for (int row = 0; row <= n; row++)
    {
        // Print leading spaces
        for (int i = 0; i < spaces; i++)
        {
            printf("  ");
        }
        spaces--;
        
        // Print increasing numbers
        for (int i = 0; i <= row; i++)
        {
            if (i == row)
                printf("%d", i);
            else
                printf("%d ", i);
        }
        
        // Print decreasing numbers
        for (int i = row - 1; i >= 0; i--)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
    
    // Lower part of the pattern
    int hi = n - 1;
    spaces = 1;
    for (int row = 0; row <= n - 1; row++)
    {
        // Print leading spaces
        for (int i = 0; i < spaces; i++)
        {
            printf("  ");
        }
        spaces++;
        
        // Print increasing numbers
        for (int i = 0; i <= hi; i++)
        {
            if (i == hi)
                printf("%d", i);
            else
                printf("%d ", i);
        }
        
        // Print decreasing numbers
        for (int i = hi - 1; i >= 0; i--)
        {
            printf(" %d", i);
        }
        hi--;
        printf("\n");
    }

    return 0;
}
