// STL _ Map Ver0.2
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
	/*
	map<string, int> Numbers;

	// ** Key Value
	//map<int, int>

	Numbers["A"] = 1;
	Numbers["B"] = 2;
	Numbers["C"] = 3;
	Numbers["D"] = 4;
	Numbers["E"] = 5;

	for (map<string, int>::iterator iter = Numbers.begin(); iter != Numbers.end(); ++iter)
	{
		cout << iter->first << endl;
		cout << iter->second << endl << endl;
	}
	*/

	//int Array[(int)'A']; //  배열은 정수 형이면서 상수 이어야 한다.


	enum Key
	{
		Player,
		Enemy,
		Bullet,
		Max,
	};

	const int MaxObject = 128;

	int Array[Max][MaxObject];

	for (int i = 0; i < Max; ++i)
	{
		for (int j = 0; j < MaxObject; ++j)
		{
			Array[i][j] = j;
		}
	}

	for (int i = 0; i < MaxObject; ++i)
	{
		Array[Player][i] = i;
	}


	return 0;
}