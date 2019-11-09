#pragma once

class Time
{
public:
	Time();
	~Time();
	void Update();

private:
	int timer;
	bool morning, afternoon, evening, night;
	int day, year;
	int season;
	bool newDay;

	bool spring, summer, autumn, winter;

};

