#include <iostream>
#include <math.h>
int IsPrime(int);
int IsCoprime(int,int);
int IsCircular(int);
int main()
{
    int a,b;
    std::cout<<"Enter 2 numbers:";
    std::cin>>a>>b;
    if(IsPrime(a))
        std::cout<<a<<" is prime \n";
    else
        std::cout<<a<<" is not prime \n";
    if(IsPrime(b))
        std::cout<<b<<" is prime \n";
    else
        std::cout<<b<<" is not prime \n";
    if(IsCoprime(a,b))
        std::cout<<a<<" and "<<b<<" are co prime \n";
    else
        std::cout<<a<<" and "<<b<<" are not co prime \n";
    if(IsCircular(a))
        std::cout<<a<<" is circular prime \n";
    else
        std::cout<<a<<" is not circular prime \n";
    if(IsCircular(b))
        std::cout<<b<<" is circular  prime \n";
    else
        std::cout<<b<<" is not circular prime\n";
    return 0;
}
int IsPrime(int a)
{
    int i;
    if(a<=1)
        return 0;
    for(i=2;i<=sqrt(a);i++)
        if(a%i==0)
            return 0;
    return 1;
}
int IsCoprime(int a,int b)
{
    int small=a<b?a:b;
    for(int i=2;i<=small;i++)
        if(a%i==0 && b%i==0)
            return 0;
    return 1;
}
int IsCircular(int a)
{
    int x,count;
    x=a;
    count=0;
    while(x)
    {
        count++;
        x/=10;
    }
    x=a;
    while(IsPrime(x))
    {
        x=pow(10,count-1)*(x%10)+x/10;
        if(x==a)
            return 1;
    }
    return 0;

}
