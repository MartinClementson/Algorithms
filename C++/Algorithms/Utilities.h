#pragma once
#include <vector>
#include <iostream>
#include <random>
#include <chrono>
#include "Stopwatch.h"

namespace Util
{
	

	class RandomGenerator
	{
	private:
		std::random_device rd;
		std::mt19937 rng;
		std::uniform_int_distribution<int> uni;
	public:
		RandomGenerator();
		int GetRandomInt(int min, int max);
	};
	class Timer
	{
	private:
		std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
	public:
		void StartTimer();
		double StopTimer();
	};

	
	std::vector<int> GenerateRndVector_INT(unsigned int size,int min,int max);

}