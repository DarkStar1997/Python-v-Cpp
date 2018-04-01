#include <iostream>
#include <MyTimer.h>
#include <sstream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	stringstream str1;
	int n; cin>>n;
	auto start=now();
	for(int i=1; i<=n; i++)
		str1<<i;
	cout<<span(start, now())<<"\n";
	//cout<<str1.str()<<"\n";
}
