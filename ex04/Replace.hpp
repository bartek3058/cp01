#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
    private:
            std::string filename;
            std::string s1;
            std::string s2;

    public:
            Replace(std::string filename, std::string s1, std::string s2);
            bool execute();
};

#endif