#include "Computer.h"
// ctor

Computer::Computer(int _price, string _manufacturerName, string _cpu, bool _isLaptop) : Item(_price, _manufacturerName), cpu(_cpu), isLaptop(_isLaptop)
{
}

// getters
string Computer::getCpu() const
{
	return this->cpu;
}
bool Computer::isItLaptop() const
{
	return this->isLaptop;
}
// setters

void Computer::setCpu(string newCpu)
{
	this->cpu = newCpu;
}
void Computer::setisLaptop(bool state)
{
	this->isLaptop = state;
}
Computer::operator string()
{
	string str;
	string type = "Desktop";
	if (this->isItLaptop())
	{
		type = "Laptop";
	}
	str = this->Item::operator string() + ", " + type + ", " + this->cpu;
	return str;
}