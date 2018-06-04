// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<int> vNumbers;

	std::vector<int>::iterator pIterator;
	std::vector<int>::reverse_iterator pRevIterator;

	vNumbers.push_back(5);
	vNumbers.push_back(19);
	vNumbers.push_back(23);
	vNumbers.push_back(37);
	vNumbers.push_back(43);

	printf("\n Vector of Numbers in Regular Order");
	for( pIterator = vNumbers.begin(); pIterator != vNumbers.end(); pIterator++)
		printf("\n %d", *pIterator);

	printf("\n Vector of Numbers in Reverse Order");
	for( pRevIterator = vNumbers.rbegin(); pRevIterator != vNumbers.rend(); pRevIterator++)
		printf("\n %d", *pRevIterator);

	int x;
	scanf("%d", &x);

	return 0;
}

