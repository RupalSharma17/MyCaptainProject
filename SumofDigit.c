#include <stdio.h>
int SumofDigits(int num);
int main()
{
    int num, sum;
    
    printf("Enter any number");
    scanf("%d", &num);
    
    sum = SumofDigits(num);
    
    printf("Sum of digits of %d = %d", num, sum);
    
    return 0;
}

int SumofDigits(int num)
{
    if(num == 0)
        return 0;
        
    return ((num % 10) + SumofDigits(num / 10));
}
