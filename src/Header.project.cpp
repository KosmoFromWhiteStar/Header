#include <iostream>
#include "Header.project.h"

int main()
{
	std::cout << "Surge" << ENDL;
	std::cout << "Input command" << ENDL;

	do
	{
		std::string command = "";
		std::cin >> command;
		int x = coordinate(), y = coordinate();
		
		bool start_serg = false; // status surgery
		if (compare(command, "scalpel"))
		{
			scalpel(&(x), &(y));
			start_serg = true;
		}
		if (compare(command, "hemostat") && start_serg) scalpel(&(x), &(y));
		if (compare(command, "tweezers") && start_serg) scalpel(&(x), &(y));
		if (compare(command, "suture") && start_serg) scalpel(&(x), &(y));
		if (compare(command, "suture") && start_serg)
		{
			start_serg = false;
			break;
		}

	} while (true);
	
	return 0;
}
