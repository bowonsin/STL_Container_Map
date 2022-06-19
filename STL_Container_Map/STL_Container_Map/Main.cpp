// STL _ Map Ver0.4
#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace std;

struct Vector3
{
	float x, y, z;

	Vector3() : x(0.0f), y(0.0f), z(0.0f) {};
	Vector3(const float _x, const float _y) : x(_x), y(_y), z(0.0f) {};
	Vector3(const float _x, const float _y,const float _z) : x(_x), y(_y), z(_z) {};
};

struct Transform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;
};

struct Object
{
	Transform Info;

	Object() {};
	Object(const Transform& _info): Info(_info){};
};
struct Player : public Object
{
	Player() {};

	Player(const Transform& _info) : Object(_info) {};
};

map<string, list<Object*>> Objects;


void AddData(string _Key, Object* _Object);
void Initialize();

void AddData(int _Key, int _Value);
map<int, int> Numbers;

int main(void)
{
	Transform Info;

	list<Object*> Check;


	Info.Position.x = 10;
	Info.Position.y = 20;
	Info.Position.z = 30; 
	AddData("Player",new Player(Info));


	map<string, list<Object*>>::iterator iter = Objects.find("Player");//** find ��� �Լ��� �̿��ؼ� iterator �� �����´�.

	
	for (auto iter1 = iter->second.begin(); iter1 != iter->second.end(); ++iter1)
	{
		cout << (*iter1)->Info.Position.x << endl;
		cout << (*iter1)->Info.Position.y << endl;
		cout << (*iter1)->Info.Position.z << endl;
	}

	//Initialize();
	//cout << Objects["Player"]->Info.Position.x << endl;
	//cout << Objects["Player"]->Info.Position.y << endl;
	//cout << Objects["Player"]->Info.Position.z << endl;
	
	return 0;
}


void AddData(string _Key, Object* _Object)
{
	map<string, list<Object*>>::iterator iter = Objects.find(_Key);//** find ��� �Լ��� �̿��ؼ� iterator �� �����´�.

	if (iter == Objects.end())
	{
		list<Object*> Temp;
		Temp.push_back(_Object);
		Objects.insert(make_pair(_Key, Temp));
	}
	else
		iter->second.push_back(_Object);
}

void Initialize()
{
	Transform Info;

	Info.Position.x = 10;
	Info.Position.y = 20;
	Info.Position.z = 30;

	//Objects["Player"] = new Player(Info);
}

void AddData(int _Key, int _Value)
{
	map<int, int>::iterator iter = Numbers.find(_Key);//** find ��� �Լ��� �̿��ؼ� iterator �� �����´�.

	if (iter == Numbers.end())
		Numbers.insert(make_pair(_Key, _Value));
	else
		iter->second = _Value;
}


/*
	���� �� Ʈ�� ����
	��鸵-> ???

	���� ���� �� ���ؼ� �𸣰�

	������ ���ؼ��� �ſ� ȿ�����̴�.
*/
/*
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
*/
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