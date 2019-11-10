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

private:
	void TimeOfDay();

	int timer;
	int hourCount;

	bool morning, afternoon, evening, night;
	int day, year;
	int season;
	bool newDay;

	bool spring, summer, autumn, winter;


};

