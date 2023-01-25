#include <iostream>
int main()
{
    int a;
    std::cout<<"Enter a number:";
    std::cin>>a;
    int x=a,rev=0;
    while(x>0)
    {
        rev=rev*10+x%10;
        x/=10;
    }
    std::cout<<"reverse of "<<a<<" is "<<rev;
}
