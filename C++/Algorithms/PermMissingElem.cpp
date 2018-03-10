#include"PermMissingElem.h"

namespace PermMissingElem {


	int solution(vector<int> &A) {
		
		bool tests[100001];
		memset(tests, 0, sizeof(bool) * 100001);

		size_t size = A.size();
		for (size_t i = 0; i < size; i++)
		{
			tests[A[i]] = true;
		}

		for (size_t i = 1; i < 100001; i++)
		{
			if (tests[i] == false)
				return i;
		}
		return 100001;
	}

}