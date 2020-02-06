
#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

namespace BinaryTreeSum {

	long recursiveSum(vector<long>& arr, int nodeIndex) { //1
		long sum = 0;
		if (arr.size() - 1 < nodeIndex)
			return sum;
		else {
			if (arr[nodeIndex] == -1)
				return 0;
			sum += recursiveSum(arr, nodeIndex + (nodeIndex + 1));
			sum += recursiveSum(arr, nodeIndex + (nodeIndex + 2));
			return sum + arr[nodeIndex];
		}
	}

	string solution(vector< long > arr) {
		string result = "";

		if (arr.size() > 0) {

			long right = 0;
			long left = 0;

			left = recursiveSum(arr, 1);
			right = recursiveSum(arr, 2);
		
			if (left == right)
				return "";
			else if (left > right)
				return "Left";
			else
				return "Right";
		}


		return result;
	}


void RunTests() {
	vector<vector<long>> tests;
	tests.push_back(vector<long> { 3, 6, 2, 9, -1, 10 }); //Result: Left
	tests.push_back(vector<long> { 1,4,100,5 }); //Result: Right
	tests.push_back(vector<long> { 1,10,5,1,0,6 }); //Result: ""
	tests.push_back(vector<long> { }); //Result: ""
	tests.push_back(vector<long> {1}); //Result: ""

	for (size_t i = 0; i < tests.size(); i++)
	{
		std::cout << solution(tests[i]) << std::endl;
	}
}
}