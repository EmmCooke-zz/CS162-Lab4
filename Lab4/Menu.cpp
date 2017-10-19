#include "menu.hpp"
#include <iostream>

Menu::Menu(int numOptions)
{
	setPrompt("");
	setMenuSize(numOptions);
	options = new string[getMenuSize()];
}

Menu::Menu(string promptIn, int numOptions)
{
	setPrompt(promptIn);
	setMenuSize(numOptions);
	options = new string[getMenuSize()];
}

void Menu::setOption(int optionNumber, string optionIn) const
{
	if (optionNumber < getMenuSize())
	{
		options[optionNumber] = optionIn;
	}
}

void Menu::printPrompt() const
{
	std::cout << getPrompt() << std::endl;
}

void Menu::printOptions() const
{
	for (int i = 0; i < getMenuSize(); i++)
	{
		if (options[i] != "")
		{
			std::cout << i + 1 << ". ";
			std::cout << options[i] << std::endl;
		}
		
	}
}
