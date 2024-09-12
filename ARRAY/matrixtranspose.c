#define R 3
#define C 2
#include <stdio.h>
#include <conio.h>
void main()
{
   // for input matrix elements🤗😆😂😋😍😍😍
   int A[R][C], i, j;
   printf("Enter values for matrix:\n");
   for (i = 0; i < R; i++)
   {
      for (j = 0; j < C; j++)
         scanf("%d", &A[i][j]);
   }
   // for printing original matrix🙈😱😱🥵🥵🤪🤪😳😳
   for (i = 0; i < R; i++)
   {
      for (j = 0; j < C; j++)
         printf("%d\t", A[i][j]);
      printf("\n");
   }
   // for transpose matrix convert R into C and C into R 📽️🎥🤗😭🙈🙈🙈🙈👹👹👹 and printing------

   printf("your transpose matrix is :\n");
   for (i = 0; i < C; i++)
   {
      for (j = 0; j < R; j++)
         printf("%d\t", A[j][i]);
      printf("\n");
   }
}