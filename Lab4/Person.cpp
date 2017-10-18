/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This file contains the definitions
* for the Person class. There is a default constructor
* and a constructor that takes a string and an int.
*************************************************/
#include "Person.hpp"

/*************************************************
* Description: Default Constructor. Sets name to 
* empty string and age to 0.
*************************************************/
Person::Person()
{
	setName("");
	setAge(0);
}

/*************************************************
* Description: Constructor that takes in a string for
* the name and an int for age.
*************************************************/
Person::Person(string nameIn, int ageIn)
{
	setName(nameIn);
	setAge(ageIn);
}

/*************************************************
* Description: Destructor.
*************************************************/
Person::~Person()
{
}
