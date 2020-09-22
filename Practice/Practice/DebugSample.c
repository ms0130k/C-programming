#include <stdio.h>

void main()
{
	int nData = 10;
	//int pnData = &nData;
	int *pnData = &nData;

	*pnData = 5;
}