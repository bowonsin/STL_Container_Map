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
	//int Array[(int)'A']; //  �迭�� ���� ���̸鼭 ��� �̾�� �Ѵ�.
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


	//** make_pair = ���� �����͸� �����ָ鼭 �� �ڸ��� ü���
	//** ���� ü����� �ϴ� �ڸ��� �̹� �����Ͱ� �����ϸ� ���ڸ��� ü���� �ʴ´�.
	Numbers.insert(make_pair(4,40));
	map<int,int>::iterator iter = Numbers.find(2);//** find ��� �Լ��� �̿��ؼ� iterator �� �����´�.

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
	���� �� Ʈ�� ���� 
	��鸵-> ???

	���� ���� �� ���ؼ� �𸣰�

	������ ���ؼ��� �ſ� ȿ�����̴�.
*/

void AddData(int _Key, int _Value)
{
	map<int, int>::iterator iter = Numbers.find(_Key);//** find ��� �Լ��� �̿��ؼ� iterator �� �����´�.

	if (iter == Numbers.end())
		Numbers.insert(make_pair(_Key,_Value));
	else
		iter->second = _Value;
}
