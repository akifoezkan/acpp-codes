#include <chrono>
#include <random>
#include <iostream>

int main()
{
	using namespace std::chrono;
	std::mt19937 eng{ static_cast<unsigned>(system_clock::now().time_since_epoch().count()) };

	for (int i = 0; i < 10; ++i) {
		std::cout << eng() << '\n';
	}
}
