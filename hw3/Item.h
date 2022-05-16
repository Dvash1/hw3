
#include <iostream>
#include <string> 
using std::string; // string class doesnt work without this

class Item 
{

	int price;
	string manufacturerName;
	const int id;
	static int totalItems;

public:

	/*-- C'tors and D'tors--*/

	Item(int _price, string _name);
	virtual ~Item();
	/*-- Getters --*/
	int getPrice() const;
	string getManufacturer() const;
	int getId() const;
	
	/*-- Setters --*/

	void setPrice(const int price);
	void setManufacturer(const string newName);

	// Conversion Operator
	
	virtual operator string() = 0; // converts to string


}; 

#pragma once
