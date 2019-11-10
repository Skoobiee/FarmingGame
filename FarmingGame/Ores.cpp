#include "Ores.h"


Ores::Ores()
{


	Update();
	Draw();
}

Ores::~Ores()
{

}

void Ores::Update()
{
	if (mining)
	{
		CollectOre();
	}


}

void Ores::CollectOre()
{


	mining = false;
}

void Ores::Draw()
{




}