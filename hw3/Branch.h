#define STORE_SIZE 10
#include "Item.h"
class Branch
{
	Item** catalog;
	string location;
	int itemCount;
	int oldestIndex;

public:
	// ctor
	Branch(string _location);
	// dtor
	~Branch();

	// getters

	Item** getCatalog(int& num) const;
	string getLocation() const;
	int getItemCount() const;
	int getOldestIndex() const;
	// setters

	void setLocation(string newLocation);
	void setOldestIndex(const int index);
	void setNumOfItems(const int size);

	/* -- Functions -- */
	void addItem(Item* newItem);
}; 
#pragma once
