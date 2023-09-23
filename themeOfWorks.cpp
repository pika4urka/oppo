#include "themeOfWorks.h"

void ThemeOfWorks::ReadingTheThemesOfWork(std::ifstream& ist)
{
	ist >> name >> topic;
	date.ReadingTheDate(ist);
}

void ThemeOfWorks::ListOutputToTheConsole(std::ostream& out)
{
	out << '\t' << name << '\t' << topic << '\t';
	date.DateOutput(out);
}
