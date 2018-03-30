#include <iostream>
#include <MyTimer.h>
int main()
{
	using ull=unsigned long long;
	ull n, sum=0; std::cin>>n;
	auto start=now();
	#pragma omp parallel for reduction(+:sum)
	for(int i=1; i<=n; i++)
		sum+=i;
	auto end=now();
	//std::cout<<sum<<"\n";
	std::cout<<span(start, end)<<"\n";
}
