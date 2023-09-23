#include "date.h"

void Date::ReadingTheDate(std::istream& ist)
{
	char buf;
	Date date;
	ist >> day;
	ist.get(buf);
	ist >> month;
	ist.get(buf);
	ist >> year;
}

void Date::DateOutput(std::ostream& out)
{
	out << day << "."
		<< month << "."
		<< year << "\n";
}