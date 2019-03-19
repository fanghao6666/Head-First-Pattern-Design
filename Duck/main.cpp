#include<iostream>

#include "Duck.h"

using namespace std;

int main()
{
	Duck *d1 = new DuckMallard();
	Duck *d2 = new DuckRedHead();

	cout << endl << "Before Set" << endl << endl;

	d1->performFly();
	d1->performQuack();

	d2->performFly();
	d2->performQuack();

	d1->setQuackBehavior(new MuteQuack());
	d1->setFlyBehavior(new FlyWithWings());

	d2->setQuackBehavior(new MuteQuack());

	cout << endl << "After Set" << endl << endl;
	d1->performFly();
	d1->performQuack();

	d2->performFly();
	d2->performQuack();

	return 0;
}