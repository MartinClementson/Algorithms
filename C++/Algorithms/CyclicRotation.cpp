//Test @ https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/start/


/* 
	Test
	Input size : 50000 , K = 3
	Elapsed Time (Naive): 290.695
	Elapsed Time        : 0.128718

	Input size : 50000 , K = 5000
	Elapsed Time (Naive): TIMEOUT
	Elapsed Time        : 0.120165


*/

#include "CyclicRotation.h"
namespace CyclicRotation {

#pragma region Slow, Naive Solution
vector<int> naiveSolution(vector<int> &A, int K) {
	// write your code in C++14 (g++ 6.2.0)
	if (K == A.size() || A.size() == 0)
		return A;

	//Create new array
	vector<int> newArray = A;

	for (size_t i = 0; i < K; i++)
	{
		newArray = ShiftOne(newArray);
	}
	//Optimized approach
	return newArray;
}

vector<int> ShiftOne(vector<int> &vec)
{
	vector<int> newArray(vec.size());
	int size = vec.size();
	newArray[0] = vec[size - 1];
	for (int i = 1; i < size; i++)
	{
		newArray[i] = vec[i-1];
	}

	return newArray;
}
#pragma endregion


#pragma region Constant time solution
vector<int> solution(vector<int> &A, int K) {

	size_t Asize = A.size();
	if (K == Asize || Asize == 0)
		return A;
	
	//If K is above array size it will loop around. Recalculate K by subtracting the amount of loops.
	if (K > Asize)
	{
		int numLoops = K / Asize;
		K = K - (Asize*numLoops);
	}
	//Create new array
	vector<int> newArray = A;

	memcpy(newArray.data(), A.data() + (Asize  - K) , sizeof(int) * K);
	memcpy(newArray.data() +  K, A.data(), sizeof(int) *(Asize - K));

	return newArray;
}
#pragma endregion
}
