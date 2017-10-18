/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This is the header file for the Instructor
* class.
*************************************************/
#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include "Person.hpp"
class Instructor :
	public Person
{
private:
	double rating;

public:
	// Default Constructor
	Instructor();

	// Constructor that takes in a string, int, and double.
	// It passes the string and int to the Person constructor.
	Instructor(string nameIn, int ageIn, double ratingIn);

	// Destructor
	~Instructor();

	// Getters
	double getRating() const { return rating; }

	// Setters
	void setRating(double ratingIn);

	// Overriden do_work() function from Person
	virtual void do_work();
};

#endif

