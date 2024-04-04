#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
 printf("enter 9 values for matrix A : \n");

 //for input matrix a values

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

        
        scanf("%d",&a[i][j]);
    }
    printf("\n");
    }
printf("enter 9 values for matrix B : ");

//for input matrix b values 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //**👩‍❤️‍👩🤗calculation for matrix c[0][0]=a[0][0]+b[0][0])
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //for printing values of matrix a + matrix b = matrix c
    printf("\naddition of matrix is :\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}