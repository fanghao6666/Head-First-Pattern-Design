#pragma once
#include <iostream>

using namespace std;

class QuackBehavior
{
public:
	virtual void quack() = 0;
};


// quack
class Quack : public QuackBehavior
{
public:
	void quack()
	{
		cout << "gua~ gua~" << endl;
	}
};

// squeak
class Squeak : public QuackBehavior
{
public:
	void quack()
	{
		cout << "ji~ ji~" << endl;
	}
};

class MuteQuack : public QuackBehavior
{
public:
	void quack()
	{
		cout << "emmmmmmmmmmmmm" << endl;
	}
};