// STL _ Map Ver0.3
#include <iostream>
#include <string>
#include <map>

using namespace std;

void AddData(int _Key, int _Value);
map<int, int> Numbers;


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


	/*
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
	*/


	Numbers[0] = 0;
	Numbers[1] = 10;
	Numbers.insert(make_pair(3, 30));


	//** make_pair = 기존 데이터를 지켜주면서 빈 자리만 체운다
	//** 만약 체우고자 하는 자리에 이미 데이터가 존제하면 그자리를 체우지 않는다.
	Numbers.insert(make_pair(4,40));
	map<int,int>::iterator iter = Numbers.find(2);//** find 라는 함수를 이용해서 iterator 를 가져온다.

	if (iter == Numbers.end())
		Numbers.insert(make_pair(2, 200));
	else
		iter->second = 200;
		

	iter->second = 200;


	for (map<int, int>::iterator iter = Numbers.begin(); iter != Numbers.end(); ++iter)
		cout << iter->second << endl;

	return 0;
}
/*
	레드 블랙 트리 구조 
	헨들링-> ???

	삾입 삭제 에 대해선 모르고

	관리에 대해서는 매우 효율적이다.
*/

void AddData(int _Key, int _Value)
{
	map<int, int>::iterator iter = Numbers.find(_Key);//** find 라는 함수를 이용해서 iterator 를 가져온다.

	if (iter == Numbers.end())
		Numbers.insert(make_pair(_Key,_Value));
	else
		iter->second = _Value;
}
