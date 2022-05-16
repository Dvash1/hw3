#pragma once
#include "Item.h"

class Computer : public Item
{
	string cpu;
	bool isLaptop;

public:
	// ctor
	Computer(int _price, string _manufacturerName, string _cpu, bool _isLaptop);

	// getters

	string getCpu() const;
	bool isItLaptop() const;

	// setters

	void setCpu(string newCpu);
	void setisLaptop(bool state);

	//operator
	virtual operator string();
};