
#include <iostream>
#include <iomanip>
using namespace std;

int** func(int** mass, int size1, int size2)
{
	for (int i = 0; i < size1; i++)
		for (int j = 0; j < size2; j++)
			mass[i][j] = (rand()) % 2 - 1;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
			cout << setw(3) << mass[i][j];
		cout << endl;
	}
	cout << endl << endl;
	return mass;
}

int main()
{
	
	
	int** mass = new int* [4];
	for (int i = 0; i < 4; i++)
		mass[i] = new int[5];
	func(mass, 4, 5);
	int* zeronum = new int[4] {0};

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (mass[i][j] == 0)
			{
				zeronum[i]++;
			}
	int* ptmp;
	for (int i = 0; i < 4; i++)
	{
	if (zeronum[i] != 0)ptmp = new int[4 - zeronum[i]];
		else ptmp = new int[5];

		for (int j = 0, k = 0; k < 4 - zeronum[i]; j++, k++)
		{
			if (mass[i][j] != 0)
				ptmp[k] = mass[i][j];
			else k--;
		}

		cout << endl;
		delete[] mass[i];
		mass[i] = ptmp;
		ptmp = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5 - zeronum[i]; j++)
			cout << setw(3) <<mass[i][j];
		cout << endl;
	}
}