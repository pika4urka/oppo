#pragma once
#include <iostream>
#include "date.h"
#include <vector>
#include <fstream>

class ThemeOfWorks
{
	std::string name;
	std::string topic;
	Date date;
public:
	void ListOutputToTheConsole(std::ostream& out);
	void ReadingTheThemesOfWork(std::ifstream& ist);
};