#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

#include "Subject.h"
#include "Observer.h"

using namespace std;

class WeatherData : public Subject
{
public:
	WeatherData() : temp(0), humidity(0), pressure(0) {};

	void registerObserver(Observer *ob)
	{
		observers.push_back(ob);
	}
	void removeObserver(Observer *ob)
	{
		vector<Observer *>::iterator found = find(observers.begin(), observers.end(), ob);
		if (found != observers.end())
		{
			observers.erase(found);
		}
	}
	void notifyObservers()
	{
		for (vector<Observer *>::iterator iter = observers.begin(); iter != observers.end(); iter++)
		{
			(*iter)->update();
		}
	}
	int getTemp()
	{
		return temp;
	}
	int getHumidity()
	{
		return humidity;
	}
	int getPressure()
	{
		return pressure;
	}
	void measurementChanged()
	{
		notifyObservers();
	}
	void setMeasurement(int t = 1,int h = 2, int p = 3)
	{
		temp = t;
		humidity = h;
		pressure = p;
		measurementChanged();
	}
private:
	int temp;
	int humidity;
	int pressure;

	vector<Observer *> observers;
};