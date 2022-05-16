#include "Item.h"

// C'tor
Item::Item(int _price, string _name) : id(totalItems++), price(_price), manufacturerName(_name)
{

}

// D'tor
Item::~Item()
{
	std::cout << "Throwing away an item" << std::endl;
}

// Getters
int Item::getPrice() const
{
	return this->price;
};
string Item::getManufacturer() const
{
	return this->manufacturerName;
};
int Item::getId() const
{
	return this->id;
};


/*-- Setters --*/

void Item::setPrice(const int _price)
{
	this->price = _price;
}
void Item::setManufacturer(const string newName)
{
	this->manufacturerName = newName;
}


/*-- Operators --*/

Item::operator string()
{
	string newStr;
	newStr = "id " + std::to_string(this->id) + ": " + this->manufacturerName + " " + std::to_string(this->price) + "$";
	return newStr;
}

int Item::totalItems = 1;