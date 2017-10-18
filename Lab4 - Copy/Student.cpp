/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This file contains the definitions
* for the Student class.
*************************************************/
#include <iostream>
using std::cout;
using std::endl;

#include <ctime>

#include "Student.hpp"

/*************************************************
* Description: Default Constructor. Sets name to
* empty string, age to 0, and gpa to 0. Sets a random 
* seed for randomized time.
*************************************************/
Student::Student()
{
	setName("");
	setAge(0);
	setGPA(0);
	srand(time(0));	// So that the hoursWorked in do_work() is random
}

/*************************************************
* Description: Constructor that takes in a string for name,
* an int for age, and a double for GPA. It then passes name
* and age to the Person constructor.
*************************************************/
Student::Student(string nameIn, int ageIn, double gpaIn)
	: Person(nameIn, ageIn)
{
	setGPA(gpaIn);
}

/*************************************************
* Description: Destructor.
*************************************************/
Student::~Student()
{
}

/*************************************************
* Description: Determines if the GPA is within a valid
* range and then sets it. If it is not, it sets it to the
* nearest bound.
*************************************************/
void Student::setGPA(double gpaIn)
{
	if (gpaIn < 0)
	{
		gpa = 0.00;
	}
	else if (gpaIn > 4.00)
	{
		gpa = 4.00;
	}
	else
	{
		gpa = gpaIn;
	}
}

/*************************************************
* Description: Overriden function from Person that
* outputs a statement about what the student has done.
*************************************************/
void Student::do_work()
{
	int hoursWorked = rand() % 24;

	cout << this->getName() << " did " << hoursWorked << " of homework." << endl;
}

