#include "gcd.h"

int iterGcd(int x, int y)
{
    while(x!=y)
    {
        if(x<y) y=y-x;
        else x = x-y;

        
    }
    return x;
}

int recurGcd(int x, int y)
{
    while(y!=0)
    {
        return recurGcd(y,x%y);
    }
    return x;
}