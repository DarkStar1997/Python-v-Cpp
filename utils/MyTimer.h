#include <chrono>
std::chrono::steady_clock::time_point now()
{
	return std::chrono::steady_clock::now();
}
double span(std::chrono::steady_clock::time_point t1, std::chrono::steady_clock::time_point t2)
{
	std::chrono::duration<double> diff=t2-t1;
	return diff.count();
}
