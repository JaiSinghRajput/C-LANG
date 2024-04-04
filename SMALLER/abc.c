#include<stdio.h>
#include<stdlib.h>

int main() {

    int n, i, *ptr, sum = 0;
    printf("Enter total number of elements : ");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error! Memory not allocated.");
        return 0;
    }

    printf("Enter elements of array : \n");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Elements are :\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}