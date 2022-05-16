#pragma once
#include "Item.h"
#include "Computer.h"

class PeripheralDevice : public Item 
{
	string color;
	bool isWireless;
public:
	//ctor
	PeripheralDevice(int _price, string _name, string _color, bool _isWireless);
	//getter
	string getColor() const;
	bool getIsWireless() const;
	//setter
	void setColor(string _color);
	void setIsWireless(bool state);
	//methods
	void connect(Computer& computer);
};