#include "Branch.h"

// ctor
Branch::Branch(string _location) : location(_location), itemCount(0), oldestIndex(0), catalog(NULL)
{
	this->catalog = new Item*[STORE_SIZE];
	for (int i = 0; i < STORE_SIZE; i++)
	{
		catalog[i] = NULL;
	}
}
// dtor
Branch::~Branch() {
	for (int i = 0; i < this->itemCount; i++)
	{
		if (catalog[i] != NULL)
		{
			delete catalog[i];
		}
	}
	delete[] catalog;
}

void Branch::addItem(Item* newItem)
{
	
	if (itemCount == STORE_SIZE) // means store is full
	{
		delete catalog[oldestIndex]; // throws away oldest item
		catalog[oldestIndex] = newItem;
		this->oldestIndex = (oldestIndex + 1) % STORE_SIZE; 
	}
	else {
		catalog[itemCount++] = newItem;
		//(itemCount)++;
	}
};

// getters

Item** Branch::getCatalog(int& num) const 
{
	num = itemCount;
	return catalog;
}
string Branch::getLocation() const 
{
	return this->location;
}

int Branch::getItemCount() const 
{
	return this->itemCount;
}

int Branch::getOldestIndex() const
{
	return this->oldestIndex;
}

// setters
void Branch::setLocation(string newLocation)
{
	this->location = location;
}
void Branch::setOldestIndex(const int index)
{
	this->oldestIndex = index;
}
void Branch::setNumOfItems(const int size)
{
	this->itemCount = size;
}