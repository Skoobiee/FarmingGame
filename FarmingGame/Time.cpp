#include "Time.h"


Time::Time()
{
	day = 1;
	season = 1;
	year = 1;

	spring = true;
	summer = false;
	autumn = false;
	winter = false;
}

Time::~Time()
{

}

void Time::Update()
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
				season = 1;
				year++;
			}
		}
	}

	switch (season)
	{
		season = 1;
		spring = true;
		break;

		season = 2;
		summer = true;
		break;

		season = 3;
		autumn = true;
		break;

		season = 4;
		winter = true;
		break;

	default:
		break;
	}

	

}