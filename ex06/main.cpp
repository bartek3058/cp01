#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr<<"Usage: ./harlFilter LEVEL"<<std::endl;
		return 1;
	}
	std::string lvl = argv[1];
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;
	int i = 0;
	while (i < 4)
	{
		if (levels[i] == lvl)
		{
			index = i;
			break ;
		}
		i++;
	}

	Harl H;

	if (index == -1)
	{
		std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
		return 0;
	}

switch (index)
{
	case 0:
		std::cout << "[ DEBUG ]" <<std::endl;
		H.complain("DEBUG");
		std::cout<<std::endl;
	
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		H.complain("INFO");
		std::cout<<std::endl;
	
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		H.complain("WARNING");
		std::cout<<std::endl;

	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		H.complain("ERROR");
		std::cout<<std::endl;

	default:
		break ;
	
}
return 0;
}