#include "OddOccurrencesInArray.h"
#include "CyclicRotation.h"
#include <iostream>
#include "Utilities.h"


template <typename T> 
void PrintVector(std::vector <T>& vec)
{	
	size_t size = vec.size();

	std::cout << "[";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << ( i == 0 ? "":",") << vec[i];
	}
	std::cout << "]" <<std::endl;
}

int main()
{
	double naiveTime, time;
	std::vector<int> input = { 3, 8, 9, 7 };


	input = Util::GenerateRndVector_INT(50000,0,100);
	
	if (input.size() > 10)
	{
		cout << "Input size : " << input.size() << std::endl;
	}
	else
	{
		cout << "Input Values : ";
		PrintVector(input);
	}
	
	//ODD_OCCUR::solution(input);
	win32::Stopwatch timer;
	timer.Start();
	CyclicRotation::solution(input, 5000);
	timer.Stop();
	time = timer.ElapsedMilliseconds();
	timer.Reset();

	//timer.Start();
	//CyclicRotation::naiveSolution(input, 5000);
	//timer.Stop();
	//naiveTime = timer.ElapsedMilliseconds();
	//timer.Reset();



	//cout << "Elapsed Time (Naive): " << naiveTime << std::endl;
	cout << "Elapsed Time        : " << time << std::endl;
	
	getchar();
}