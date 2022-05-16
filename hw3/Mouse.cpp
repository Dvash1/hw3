#include "Mouse.h"

//ctor
Mouse::Mouse(int _price, string _name, string _color, bool _isWireless, int _dpi) : PeripheralDevice(_price, _name, _color, _isWireless), dpi(_dpi)
{
}

//getter
int Mouse::getDpi() const
{
	return this->dpi;
}
//setter
void Mouse::setDpi(int num)
{
	this->dpi = num;
}

Mouse::operator string()
{
	string str;
	string mouseType = "Wired";
	if (this->getIsWireless())
	{
		mouseType = "Wireless";
	}
	str = this->Item::operator string() + ", " + mouseType + ", " + this->getColor()
		+ ", " + "Mouse with " + "dpi : " + std::to_string(dpi);
	return str;
}

void Mouse::connect(Computer& comp)
{
	std::cout << "Connecting a mouse" << std::endl;
	this->PeripheralDevice::connect(comp);
}