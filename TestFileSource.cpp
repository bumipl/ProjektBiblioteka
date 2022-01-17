#include "FileSource.h"
#include <iostream>

int main()
{
    // test odczytu
    FileSource testFileSource;
    testFileSource.fileName = "testOutput.txt";

    vector<string> lines = testFileSource.readAllLines();
    for (string line : lines)
    {
        std::cout << line << std::endl;
    }

    // test zapisu
    FileSource testInputFileSource;
    testInputFileSource.fileName = "testInput.txt";
    vector<string> inputStrings;
    inputStrings.push_back("hello");
    inputStrings.push_back("darknes");
    inputStrings.push_back("my old");
    inputStrings.push_back("friend");
    testInputFileSource.saveAllLines(inputStrings);
}