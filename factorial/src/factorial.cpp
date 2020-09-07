#include <factorial/factorial>

namespace factorial
{
auto factorial(unsigned int value) -> unsigned long long int
{
	return (value < 1) ? 1 : value * factorial(value - 1);
}
}
