#include "OddOccurrencesInArray.h"
#include "CyclicRotation.h"
#include "PermMissingElem.h"
#include <iostream>
#include "Utilities.h"
#include "FrogRiverOne.h"
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
	win32::Stopwatch timer;
	double naiveTime, time;
	std::vector<int> input = { 1, 3, 1, 4, 2, 3, 5, 4 };


	//input = Util::GenerateRndVector_INT(50000,0,100);
	
	if (input.size() > 10)
	{
		cout << "Input size : " << input.size() << std::endl;
	}
	else
	{
		cout << "Input Values : ";
		PrintVector(input);
	}

	FrogRiverOne::solution(5, input);
	//PermMissingElem::solution(input);
	//ODD_OCCUR::solution(input);
	//CyclicRotation::solution(input, 5000);
	
	
	//timer.Start();
	//timer.Stop();
	//time = timer.ElapsedMilliseconds();
	//timer.Reset();





	//cout << "Elapsed Time (Naive): " << naiveTime << std::endl;
//	cout << "Elapsed Time        : " << time << std::endl;
	
	getchar();
}