#include "FrogRiverOne.h"

namespace FrogRiverOne {

	//Test score : 100%


	int solution(int X, vector<int>& A)
	{

		int shortestRoute = -1;
		int leafs[100001];
		memset(&leafs, -1, sizeof(int) * 100001);
		int size = A.size();

		for (int i = 0; i < size; i++)
		{
			if( leafs[A[i]] == -1)
				leafs[A[i]] = i;
		}

		
		for (int i = 1; i < X + 1; i++)
		{
			if (leafs[i] == -1)
				return -1;
			else if (leafs[i] > shortestRoute){
				shortestRoute = leafs[i];
			}
		}
		return shortestRoute;

	}

}