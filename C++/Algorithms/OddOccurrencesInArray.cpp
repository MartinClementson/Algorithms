// Test @ https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/start/
#include "OddOccurrencesInArray.h"
#include <unordered_map>
#include <iostream>
using namespace std;

namespace ODD_OCCUR {

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	unordered_map<int, int> occurrences(A.size());
	for (size_t i = 0; i < A.size(); i++)
		occurrences[A[i]] += 1;
	for (auto it : occurrences)
	{
		if (it.second % 2 != 0)
			return it.first;
	}
	return 0;

}
}