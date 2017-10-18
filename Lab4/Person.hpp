/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This is the header file for the Person
* class.
*************************************************/
#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
using std::string;

class Person
{
private:
	string name;
	int age;

public:
	// Default Constructor
	Person();

	// Constructor that takes in a string and int
	Person(string nameIn, int ageIn);

	// Destructor
	~Person();

	// Getters
	string getName() const { return name; }
	int getAge() const { return age; }

	// Setters
	void setName(string nameIn) { name = nameIn; }
	void setAge(int ageIn) { age = ageIn; }

	// abstract function to be overriden
	// by student and instructor
	virtual void do_work() = 0;
};

#endif
