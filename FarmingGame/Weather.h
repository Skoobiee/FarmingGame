#pragma once
#include "Time.h"

class Weather : public Time
{
public:
	Weather();
	~Weather();
	

private:
	void Update();
	void Draw();
	bool sunny, cloudy, raining, snowing, snowStorm = false;

	

};

