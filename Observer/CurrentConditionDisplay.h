#pragma once

#include "WeatherData.h"
#include "Observer.h"
#include "Display.h"

using namespace std;

class CurrentConditionDisplay : public Observer, public Display
{
public:
	CurrentConditionDisplay(WeatherData *wd)
	{
		weatherData = wd;
		wd->registerObserver(this);
	}
	void update()
	{
		temp = weatherData->getTemp();
		humidity = weatherData->getHumidity();
		pressure = weatherData->getPressure();
		display();
	}

	void display()
	{
		cout << "CurrentConditionDisplay :" << endl;
		cout << "Temperuture : " << temp << endl;
		cout << "Humidity : " << humidity << endl;
		cout << "Pressure : " << pressure << endl;
		cout << endl;
	}
private:
	WeatherData *weatherData;
	int temp;
	int humidity;
	int pressure;
};

class TempOnlyDisplay : public Observer, public Display
{
public:
	TempOnlyDisplay(WeatherData *wd)
	{
		weatherData = wd;
		wd->registerObserver(this);
	}
	void update()
	{
		temp = weatherData->getTemp();
		display();
	}

	void display()
	{
		cout << "CurrentConditionDisplay :" << endl;
		cout << "Temperuture : " << temp << endl;
		cout << endl;
	}
private:
	WeatherData *weatherData;
	int temp;
	int humidity;
	int pressure;
};
