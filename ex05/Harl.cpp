#include "Harl.hpp"

void Harl::debug (void)
{
	std::cout<<"[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!"<<std::endl;
}

void Harl::info (void)
{
	std::cout<<"[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<<std::endl;
}

void Harl::warning (void)
{
	std::cout<<"[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."<<std::endl;
}

void Harl::error (void)
{
	std::cout<<"[ERROR] This is unacceptable! I want to speak to the manager now."<<std::endl;
}

Harl::Harl() {}
Harl::~Harl() {}

void Harl::complain(std::string level)
{
	const std::string levels[]{"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const int n = 4;
	int i = 0;
	while (i < n)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
		i++;
	}
	std::cout<<"Harl does not recognize the level: " << level << std::endl;
}