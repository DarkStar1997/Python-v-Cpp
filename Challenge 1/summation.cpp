#include <iostream>
#include <chrono>
using namespace std;
int main()
{
	using ull=unsigned long long;
	ull n, sum=0; cin>>n;
	auto start=chrono::high_resolution_clock::now();
	#pragma omp parallel for reduction(+:sum)
	for(int i=1; i<=n; i++)
		sum+=i;
	auto end=chrono::high_resolution_clock::now();
	cout<<sum<<"\n";
	chrono::duration<double> diff=end-start;
	cout<<diff.count()<<"\n";
}
