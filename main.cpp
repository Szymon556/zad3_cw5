#include <iostream>
#include "gcd.h"
int main()
{
    std::cout<<"Iteracyjnie: "<<iterGcd(12,  18)<<std::endl;
    std::cout<<"Rekurencyjnie: "<<recurGcd(18,  12)<<std::endl;
    return 0;
}