#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("enter your number:");
    scanf("%d",&num);

    switch (num) 
    {    
        case 1: 
        printf("monday");
        break;

        case 2: 
        printf("thuseday");
        break;
        
        case 3: 
        printf("wednesday");
        break;
        
        case 4: 
        printf("thursday");
        break;
        
        case 5: 
        printf("friday");
        break;
        
        case 6: 
        printf("saturday");
        break;
        
        case 7: 
        printf("sunday");
        break;
        
        default : 
        printf("invalid number");
    }
        return 0;
}