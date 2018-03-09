#include "Utilities.h"


void Util::Timer::StartTimer()
{
	start = std::chrono::high_resolution_clock::now();
}

double Util::Timer::StopTimer()
{
	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	return elapsed.count();
}

std::vector<int> Util::GenerateRndVector_INT(unsigned int size,  int min = INTMAX_MIN, int max = INTMAX_MAX)
{
	std::vector<int> array;
	try
	{
		array.reserve(size);
	}
	catch (...)
	{
		std::cout << "Could not reserve array with that size" << std::endl;
		throw;
	}
	RandomGenerator rnd;
	for (size_t i = 0; i < size; i++)
	{
		array.push_back(rnd.GetRandomInt(min, max));
	}
	return array;
}

Util::RandomGenerator::RandomGenerator()
{
	std::mt19937 rng = std::mt19937(rd());
	
}

int Util::RandomGenerator::GetRandomInt(int min = INTMAX_MIN, int max = INTMAX_MAX)
{
	std::uniform_int_distribution<int> uni(min, max);

	return  uni(rng);
}
