/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This is the header file for the Building class.
* It has three private variables for name, address, and size 
* in sqft. Each of these have getter and setter functions.
*************************************************/
#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <string>
using std::string;

class Building
{
private:
	string name;
	string address;
	string size;	// in sqft
	
public:
	// Default Constructor
	Building();

	// Constructor that takes in a name and address if size is n/a
	Building(string nameIn, string addressIn);

	// Constructor that takes in a name, address, and size
	Building(string nameIn, string addressIn, string sizeIn);

	// Destructor
	~Building();

	// Getters
	string getName() const { return name; }
	string getAddress() const { return address; }
	string getSize() const { return size; }
	
	// Setters
	void setName(string nameIn) { name = nameIn; }
	void setAddress(string addressIn) { address = addressIn; }
	void setSize(string sizeIn) { size = sizeIn; }
};

#endif
