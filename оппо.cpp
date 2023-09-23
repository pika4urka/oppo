#include <iostream>
#include "date.h"
#include "themeOfWorks.h"

void readingInformation(std::vector<ThemeOfWorks>* PointerToTheVect, std::ifstream& ist)
{
	ThemeOfWorks bufStruct;
	while (!ist.eof())
	{
		bufStruct.ReadingTheThemesOfWork(ist);
		PointerToTheVect->push_back(bufStruct);
	}
	ist.close();
}

void informationOutput(std::vector<ThemeOfWorks>* PointerToTheVect, std::ostream& out)
{
	for (size_t i = 0; i < PointerToTheVect->size(); i++)
		PointerToTheVect->at(i).ListOutputToTheConsole(std::cout);
}

int main()
{
	std::ifstream ist("Themes Of Works.txt");
	auto* PointerToTheVect = new std::vector<ThemeOfWorks>;
	readingInformation(PointerToTheVect, ist);
	printf("\tName\tTopic\tDate\n");
	informationOutput(PointerToTheVect, std::cout);	
	delete PointerToTheVect;	
	return 0;
}