#include <iostream>
int main()
{
    int n,arr[100],min,max;
    std::cout<<"Enter number of elements:";
    std::cin>>n;
	std::cout<<"Enter elements:";
	for(int i=0;i<n;i++)
		std::cin>>arr[i];
	min=arr[0];
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	std::cout<<"Minimum"<<min<<"\n Maximum"<<max;
	return 0;
}
