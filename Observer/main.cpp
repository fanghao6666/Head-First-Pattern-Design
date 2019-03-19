#include<iostream>

#include "Subject.h"
#include "Observer.h"

#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

using namespace std;

int main()
{
	WeatherData wd;
	CurrentConditionDisplay ccd = CurrentConditionDisplay(&wd);
	TempOnlyDisplay tod = TempOnlyDisplay(&wd);

	wd.setMeasurement(3, 2, 1);
	wd.removeObserver(&tod);
	wd.setMeasurement(4, 5, 6);

	return 0;
}