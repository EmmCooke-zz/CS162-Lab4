/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This file contains the definitions for
* the Building class. There is a default constructor,
* as well as a constructor that takes in two strings
* and one int.
*************************************************/
#include "Building.hpp"

/*************************************************
* Description: Default constructor for the Building
* class. It sets name and address to an empty string
* and size to 0.
*************************************************/
Building::Building()
{
	setName("");
	setAddress("");
	setSize("0");
}

Building::Building(string nameIn, string addressIn)
{
	setName(nameIn);
	setAddress(addressIn);
	setSize("0");
}

/*************************************************
* Description: Constructor that takes in a string for
* name, a string for address, and an int for size.
* These are then set to their respective variables.
*************************************************/
Building::Building(string nameIn, string addressIn, string sizeIn)
{
	setName(nameIn);
	setAddress(addressIn);
	setSize(sizeIn);
}

/*************************************************
* Description: Destructor for the Building class.
*************************************************/
Building::~Building()
{
}
