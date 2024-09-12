#include <stdio.h>

int numberOfDisks;
void TOh(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("move disk 1 from road %c to rod %c\n", from, to);
        return;
    }
    TOh(n - 1, from, aux, to);
    printf("move disk %d from road %c to rod %c\n", n, from, to);
    TOh(n - 1, aux, to, from);
}
void main()
{
    printf("ENter Number of disks to get solution steps for tower of henoi : ");
    scanf("%d", &numberOfDisks);
    TOh(numberOfDisks, 'A', 'B', 'C');
}