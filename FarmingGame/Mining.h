#pragma once
#include "Ores.h"

class Mining
{
public:
	Mining();
	~Mining();

protected:
	virtual void Update();
	virtual void Draw();
	//void CollectOre();

	bool mining = false;


private:




};

