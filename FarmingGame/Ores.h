#pragma once
#include "Mining.h"

class Ores : public Mining
{
public:
	Ores();
	~Ores();
	void CollectOre();

	int OresNormal[10];
	int OresRare[5];

private:
	void Update();
	void Draw();

	

};

