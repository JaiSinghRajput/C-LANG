// #include <stdio.h>

// int main() {
//     int rows, i, j, space;
//     char k;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for (j = 0,k='A'; j != 2 * i - 1; j++,k++) {
//             printf("%c",k);
//         }
//         printf("\n");
//     }

//     return 0;
// }



#include<stdio.h>
void main()
{
    int i,j,s,n;
    printf("Enter Number of Row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for ( s = 1; s<=n-i;s++)
        {
            printf(" ");
        }
        
        for ( j=1; j!=2*i-1; j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
        }
}