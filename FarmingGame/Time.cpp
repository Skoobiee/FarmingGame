#include "Time.h"

using namespace std;

Time::Time()
{
	newDay = false;

	day = 1;
	season = 1;
	year = 1;

	spring = true;
	summer = false;
	autumn = false;
	winter = false;

	timer = 0;
	hourCount = 7;

	Update();
}

Time::~Time()
{

}

void Time::Update()
{
	TimeOfDay();
	Days();
	Seasons();



}

void Time::TimeOfDay()
{
	timer = SDL_GetTicks();
	cout << timer << endl;

	if (timer >= 50) //7 seconds
	{
		timer = 0;
		hourCount++;

		if (hourCount >= 12) //change to 24 (full day)
		{
			newDay = true;
			Days();
		}
	}
}

void Time::Days()
{
	if (newDay)
	{
		day++;

		if (day > 31)
		{
			season++;
			day = 1;

			if (season > 4)
			{
				year++;
				season = 1;
			}
		}
	}

	newDay = false;
}

void Time::Seasons()
{
	switch (season)
	{
	case 2:
		summer = true;
		break;

	case 3:
		autumn = true;
		break;

	case 4:
		winter = true;
		break;

	default:
		spring = true;
		break;
	}
}

void Time::Draw()
{



}