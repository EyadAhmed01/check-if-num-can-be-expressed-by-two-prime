#include <stdio.h>
#include <stdlib.h>
int isPrime(int x)
{
    int i;
    if (x <= 1)
        return 0;
    for(i=x-1; i>1; i--)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i,sum,temp;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        while(isPrime(i))
        {
            temp=n-i;
            if(isPrime(temp))
                sum=temp+i;
            break;
        }
        if(sum==n)
            break;
    }
    if(sum==n)
        printf("ur number can be represented by two prime number which are %d and %d\n",temp,i);
    else
        printf("ur number can not be represented by two prime numbers\n");
}

