#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class MyMap :public unordered_map<wchar_t*, MyMap*>
{
public:
	void addChild(wchar_t* key, MyMap* element)
	{
		insert(make_pair(key, element));
	}
	MyMap() {}
	~MyMap() { clear(); }
};

class Parent
{
public:
	vector<wchar_t*>value;
	Parent() {}
	virtual ~Parent()
	{
		value.clear();
		cout << "value1";
	}
};

class Child :public Parent
{
public:
	vector<wchar_t*> value2;
	Child() {}
	~Child()
	{
		value2.clear();
		cout << "value2";
	}
};
//int main()
//{
//	unordered_map<wchar_t*, MyMap*>* p1 = new MyMap();
//	delete p1;
//
//	wchar_t asd = L'A';
//	unordered_map<wchar_t*, MyMap*>* p2 = new MyMap();
//	static_cast<MyMap*>(p2)->addChild(&asd, new MyMap);
//	delete p2;
//
//	wchar_t asd2 = L'A';
//	Parent* p3 = new Child;
//	static_cast<Child*>(p3)->value2.push_back(&asd2);
//	delete p3;
//
//
//	return 0;
//}

int asd(int x,int& asd)
{
	x--;
	asd = x;
	return 0;
}

int asd2(int& x)
{
	x--;
	return 0;
}

int main()
{
	int x = 10;
	asd(x,x);

	return 0;
}

//3
//1
//2
//3
//5





