#include "Inventory.h"


Inventory::Inventory()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	numberOfItems = 0;
	inventory[numberOfItems++] = "Watering can";
	inventory[numberOfItems++] = "Hoe";
	inventory[numberOfItems++] = "Shovel";
	inventory[numberOfItems++] = "Axe";
	inventory[numberOfItems++] = "Seeds";
}

Inventory::~Inventory()
{

}