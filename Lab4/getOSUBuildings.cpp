#include "getOSUBuildings.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
#include <string>

void getOSUBuildings()
{
	std::string line,
		buildingName,
		buildingSize,
		buildingAddress;
	int startingPos,
		endPos,
		count = 0,
		address = 0;
	std::ifstream buildings("OSUBuildingsHTML.txt");
	std::ofstream buildingsSize("OSUBuildings.txt");
	if (buildings.is_open())
	{
		while (getline(buildings, line))
		{
			if (address == 1)
			{
				address = 0;
				startingPos = line.find(">");
				endPos = line.find("<", startingPos);
				buildingAddress = line.substr(startingPos + 1, endPos - startingPos - 1);
				buildingAddress += " ";
				startingPos = line.find(">", endPos + 1);
				endPos = line.find("<", startingPos);
				buildingAddress += line.substr(startingPos + 1, endPos - startingPos - 1);
				buildingsSize << buildingAddress << '\t';
			}
			startingPos = line.find("description");
			if (startingPos > -1)
			{
				count = 0;
				address = 1;
				startingPos = line.find(">", startingPos + 13);
				endPos = line.find("<", startingPos);
				buildingName = line.substr(startingPos + 1, endPos - startingPos - 1);
				buildingsSize << buildingName << "\t";
			}
			startingPos = line.find("center");
			if (startingPos > -1)
			{
				count++;
				if (count == 3)
				{
					startingPos = line.find(">", startingPos + 7);
					endPos = line.find("<", startingPos);
					buildingSize = line.substr(startingPos + 1, endPos - startingPos - 1);
					buildingsSize << buildingSize << endl;
				}
			}
		}
		buildings.close();
	}
	else
	{
		std::cout << "didn't work" << std::endl;
	}
}
