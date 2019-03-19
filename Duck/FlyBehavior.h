#pragma once
#include <iostream>

using namespace std;

class FlyBehavior
{
public:
	virtual void fly() = 0;

};

// flywithwings
class FlyWithWings : public FlyBehavior
{
public:
	void fly()
	{
		cout << "I am flying with wings !" << endl;
	}
};

// flynoway
class FlyNoWay : public FlyBehavior
{
public:
	void fly()
	{
		cout << "I can not fly !" << endl;
	}

};