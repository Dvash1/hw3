#pragma once
#include "PeripheralDevice.h"
class Mouse : public PeripheralDevice
{
	int dpi;
public:
	// ctor
	Mouse(int _price, string _name, string _color, bool _isWireless, int _dpi);
	//getter
	int getDpi() const;
	//setter
	void setDpi(int num);
	//operator
	virtual operator string();
	virtual void connect(Computer& comp);
};