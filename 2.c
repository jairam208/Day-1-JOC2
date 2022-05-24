#include<stdio.h>

int main()
{
    int n, rem=0, sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while(n)
    {
        rem=n%2;
        if(rem)
            sum++;
        n=n/2;
    }
    printf("The key is : %d\n", sum);
}