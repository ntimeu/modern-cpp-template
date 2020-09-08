#include <iostream>

#include <factorial/factorial>

auto main() -> int
{
	using factorial::factorial;
	std::cout << "factorial(3) = " << factorial(3) << '\n';

	using factorial::cfactorial;
	std::cout << "constexpr factorial(3) = " << cfactorial(3) << '\n';

	return 0;
}
