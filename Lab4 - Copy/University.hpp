#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Building.hpp"
#include "Person.hpp"

class University
{
private:
	string name = "Oregon State University";
	vector<Building> OSUBuildings;
	vector<Person> * OSUPeople;

public:
	// Default Constructor
	University();

	// Destructor
	~University();

	// Getters
	string getName() const { return name; }
	vector<Building> getBuildings() const { return OSUBuildings; }
	vector<Person> * getPeople() const { return OSUPeople; }

	// Setters
	void addPerson(Person * personIn);
	void readBuildings();
	void addBuilding(Building buildingIn);

	// Prints all buildings and their information
	void printBuildings() const;

	// Prints all students and their information
	void printPeople() const;
};

#endif
