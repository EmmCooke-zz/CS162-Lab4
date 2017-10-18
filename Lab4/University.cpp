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


University::University()
{
}


University::~University()
{
}

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

			Building currentBuilding(buildingName, buildingAddress, buildingSize);
			this->addBuilding(currentBuilding);
		}
		buildingList.close();
	}
	
}


void University::addBuilding(Building buildingIn)
{
	OSUBuildings.push_back(buildingIn);
}

void University::printBuildings() const
{
	if (OSUBuildings.size() > 0)
	{
		for (unsigned int i = 0; i < OSUBuildings.size(); i++)
		{
			cout << "Name:    " << OSUBuildings[i].getName() << endl;
			cout << "Address: " << OSUBuildings[i].getAddress() << endl;
			cout << "Size:    " << OSUBuildings[i].getSize() << endl << endl;

		}
	}
	
}
