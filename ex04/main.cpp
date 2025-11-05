#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Correct: ./program_name <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    Replace replace(argv[1], argv[2], argv[3]);
    if (replace.execute() == 1)
        return 1;
    return 0;
}