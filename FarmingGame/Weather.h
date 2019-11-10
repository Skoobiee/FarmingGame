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
	char rain, snow, sun, cloud, snowStorm;

	int weatherTypes[5] = { rain, snow, sun, cloud, snowStorm };

};

