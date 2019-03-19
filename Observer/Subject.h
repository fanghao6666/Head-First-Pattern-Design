#pragma once

#include "Observer.h"

class Subject
{
public:
	virtual void registerObserver(Observer *ob) = 0;
	virtual void removeObserver(Observer *ob) = 0;
	virtual void notifyObservers() = 0;
};
