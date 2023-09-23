#pragma once
#include <fstream>

class Date
{
	int day;
	int month;
	int year;
public:
	void ReadingTheDate(std::istream& ist);
	void DateOutput(std::ostream& out);
};