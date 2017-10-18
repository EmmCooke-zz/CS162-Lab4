/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This is the header file for the Student
* class.
*************************************************/
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"
class Student :
	public Person
{
private:
	double gpa;

public:
	// Default Constructor
	Student();
	// Constructor that takes in a string and int
	// and passes those to the person constructor
	Student(string nameIn, int ageIn, double gpaIn);

	// Destructor
	~Student();

	// Getters
	double getGPA() const { return gpa; }

	// Setters
	void setGPA(double gpaIn);

	// virtual function overriden from person class
	virtual void do_work();
};

#endif
