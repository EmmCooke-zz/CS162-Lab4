/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This file contains the definitions
* for the Instructor class.
*************************************************/
#include <iostream>
using std::cout;
using std::endl;

#include <ctime>

#include "Instructor.hpp"

/*************************************************
* Description: Default Constructor. Sets name to
* empty string, age to 0, and rating to 0. Sets a 
* random seed for randomized time.
*************************************************/
Instructor::Instructor()
{
	setName("");
	setAge(0);
	setRating(0);
	srand(time(0)); // So that the hoursWorked in do_work() is random
}

/*************************************************
* Description: Constructor that takes in a string for name,
* an int for age, and a double for rating. It passes the string
* and int to the Person constructor.
*************************************************/
Instructor::Instructor(string nameIn, int ageIn, double ratingIn)
	: Person(nameIn, ageIn)
{
	setRating(ratingIn);
}

/*************************************************
* Description: Destructor.
*************************************************/
Instructor::~Instructor()
{
}

/*************************************************
* Description: This sets the rating for the instructor
* between 0 and 10.
*************************************************/
void Instructor::setRating(double ratingIn)
{
	if (ratingIn < 0.0)
	{
		rating = 0;
	}
	else if (ratingIn > 10.0)
	{
		rating = 10;
	}
	else
	{
		rating = ratingIn;
	}
}

/*************************************************
* Description: Overriden function from Person that
* outputs a statement about what the instructor has done.
*************************************************/
void Instructor::do_work()
{
	int hoursWorked = rand() % 24;

	cout << this->getName() << " graded papers for " << hoursWorked << " hours." << endl;
}

