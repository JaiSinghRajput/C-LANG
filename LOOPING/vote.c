#include <stdio.h>
int main()
{
    int i, x = 0, y = 0;
    char v;
    printf("enter the vote in faver X and Y :\n");
    for (i = 0; i < 20; i++)
    {
        printf("vote number %d from 20 : ", i + 1);
        scanf("%c",&v);xur

        if (v == 'x' || v == 'X')
        {
            printf("Voted X\n");
            x = x + 1;
        }
        else if (v == 'y' || v == 'Y')
        {
            printf("Voted Y\n");
            y = y + 1;
        }
        else
        {
            printf("Somthing Wrong Enter again....");
            i--;
        }
    }
    printf("voter of x = %d\n", x);
    printf("voter of y = %d", y);
    return 0;
}