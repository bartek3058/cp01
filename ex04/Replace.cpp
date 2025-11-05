#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
    : filename(filename), s1(s1), s2(s2) {}

bool Replace::execute()
{
    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
    {
        std::cerr<<"Error: can't open input file."<<std::endl;
        return false;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open())
    {
        std::cerr<<"Error: can't open output file."<<std::endl;
        return false;
    }

    std::string content((std::istreambuf_iterator<char>(inputFile)),
                        std::istreambuf_iterator<char>());
    
    if (s1.empty())
    {
        std::cerr<<"Error: s1 is empty."<<std::endl;
        return false;
    }
    size_t pos = 0;
    while((pos = content.find(s1,pos)) != std::string::npos)
    {
        
    }
}