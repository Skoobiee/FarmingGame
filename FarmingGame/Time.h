#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include <iostream>

class Time
{
public:
	Time();
	~Time();	

protected:
	virtual void Update();
	virtual void Draw();
	virtual void Days();
	virtual void Seasons();

	int day, year;
	int season;
	bool newDay;

private:
	void TimeOfDay();
	void Calender();

	bool lookAtCalender;

	int timer;
	int hourCount;

	bool morning, afternoon, evening, night;
	

	bool spring, summer, autumn, winter;


};

