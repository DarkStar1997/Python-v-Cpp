#include <chrono>
std::chrono::high_resolution_clock::time_point now()
{
	return std::chrono::high_resolution_clock::now();
}
double span(std::chrono::high_resolution_clock::time_point t1, std::chrono::high_resolution_clock::time_point t2)
{
	std::chrono::duration<double> diff=t2-t1;
	return diff.count();
}
