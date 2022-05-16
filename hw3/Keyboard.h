#pragma once
#include "PeripheralDevice.h"

class Keyboard : public PeripheralDevice
{
	int numOfKeys;
public:
	//ctor
	Keyboard(int _price, string _name, string _color, bool _isWireless, int _numOfKeys);
	//getter
	int getNumOfKeys() const;
	//setter
	void setNumOfKeys(int num);
	//operators / functions
	void connect(Computer& comp);
	virtual operator string();
};