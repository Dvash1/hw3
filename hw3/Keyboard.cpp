#include "Keyboard.h"
//ctor
Keyboard::Keyboard(int _price, string _name, string _color, bool _isWireless, int _numOfKeys) : PeripheralDevice(_price, _name, _color, _isWireless), numOfKeys(_numOfKeys)
{
};
//getter
int Keyboard::getNumOfKeys() const
{
	return this->numOfKeys;
};
//setter
void Keyboard::setNumOfKeys(int num)
{
	this->numOfKeys = num;
};

// functions / operators
Keyboard::operator string()
{
	string str;
	string type = "Wired";
	if (this->getIsWireless())
		type = "Wireless";
	str = this->Item::operator string() + ", " + type + ", " + this->getColor() + ", " + "Keyboard with " + std::to_string(numOfKeys) + " keys";
	return str;
}
void Keyboard::connect(Computer& comp)
{
	std::cout << "Connecting a keyboard" << std::endl;
	this->PeripheralDevice::connect(comp);
}