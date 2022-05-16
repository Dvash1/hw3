#include "PeripheralDevice.h"
//c'tor
PeripheralDevice::PeripheralDevice(int _price, string _name, string _color, bool _isWireless) : Item(_price, _name), color(_color), isWireless(_isWireless)
{
}

//getter
string PeripheralDevice::getColor() const
{
	return this->color;
}
bool PeripheralDevice::getIsWireless() const
{
	return this->isWireless;
};
//setter
void PeripheralDevice::setColor(string _color)
{
	this->color = _color;
};
void PeripheralDevice::setIsWireless(bool state)
{
	this->isWireless = state;
}
//methods
void PeripheralDevice::connect(Computer& computer)
{
	std::cout << string(*this) << " " << "is Connecting to computer: " << string(computer) << std::endl;
}