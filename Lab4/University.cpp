/*************************************************
* Author: Emmet Cooke
* Date: 10/18/2017
* Description: This file contains the definitions
* for the University class.
*************************************************/
#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <string>

#include "University.hpp"

/*************************************************
* Description: Default constructor for the University class.
*************************************************/
University::University()
{
	OSUPeople = new vector<Person>;
}

/*************************************************
* Description: Default constructor for the University class.
*************************************************/
University::~University()
{
	delete OSUPeople;
}

/*************************************************
* Description: Default constructor for the University class.
*************************************************/
void University::readBuildings()
{
	string buildingLine,
		buildingName,
		buildingSize,
		buildingAddress;
	int tabOne,
		tabTwo,
		stringSize;

	ifstream buildingList("OSUBuildings.txt");

	if (buildingList.is_open())
	{
		while (getline(buildingList, buildingLine))
		{
			tabOne = buildingLine.find('\t');
			buildingName = buildingLine.substr(0, tabOne);
			stringSize = tabOne + 1;
			tabTwo = buildingLine.find('\t', stringSize);
			stringSize = tabTwo - tabOne - 1;
			buildingAddress = buildingLine.substr(tabOne + 1, stringSize);
			stringSize = buildingLine.size() - stringSize;
			buildingSize = buildingLine.substr(tabTwo + 1, stringSize);

			string correctBuildingSize = "";
			for (int i = 0; i < buildingSize.length(); i++)
			{
				if (buildingSize[i] != ',')
				{
					correctBuildingSize += buildingSize[i];
				}
			}

			if (correctBuildingSize.length() > 5)
			{
				Building currentBuilding(buildingName, buildingAddress, correctBuildingSize);
				this->addBuilding(currentBuilding);
			}
			
		}
		buildingList.close();
	}
	
}

/*************************************************
* Description: Default constructor for the University class.
*************************************************/
void University::addBuilding(Building buildingIn)
{
	OSUBuildings.push_back(buildingIn);
}

/*************************************************
* Description: Prints the Buildings that have an available
* sq ft.
*************************************************/
void University::printBuildings() const
{
	if (OSUBuildings.size() > 0)
	{
		for (unsigned int i = 0; i < OSUBuildings.size(); i++)
		{
			if (OSUBuildings[i].getSize() != "-")
			{
				cout << "Name:    " << OSUBuildings[i].getName() << endl;
				cout << "Address: " << OSUBuildings[i].getAddress() << endl;
				cout << "Size:    " << OSUBuildings[i].getSize() << " sqft" << endl << endl;
			}

		}
	}
	
}
