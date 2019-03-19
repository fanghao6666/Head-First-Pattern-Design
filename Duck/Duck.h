#pragma once
#include <iostream>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

using namespace std;

class Duck {

public:
	Duck(QuackBehavior* q, FlyBehavior* f) :qb(q), fb(f) {};

	void performQuack()
	{
		qb->quack();
	}

	void performFly()
	{
		fb->fly();
	}

	void setQuackBehavior(QuackBehavior* _qb)
	{
		qb = _qb;
	}

	void setFlyBehavior(FlyBehavior* _fb)
	{
		fb = _fb;
	}
protected:
	QuackBehavior *qb;
	FlyBehavior *fb;
};

// duckmallard
class DuckMallard : public Duck
{
public:
	DuckMallard() : Duck(new Quack(), new FlyNoWay()) {};
};

// duckredheat
class DuckRedHead : public Duck
{
public:
	DuckRedHead() : Duck(new Squeak(), new FlyWithWings()) {};
};