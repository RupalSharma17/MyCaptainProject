#include<stdio.h>
   int main()
   {
     int x;
     printf("Enter the number");
     scanf("%d",&x);
     switch(x)
     {
       case 0:printf("You entered 0");
            break;
       case 1:printf("You entered 1");
            break;
       default:printf("Invalid entry");
     }
    return 0;
}
