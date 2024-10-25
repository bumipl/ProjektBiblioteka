#include "FileSource.h"

using namespace std;

vector<string> FileSource::readAllLines()
{
    string line;
    vector<string> readedLines;
    std::ifstream file(fileName);

    if (file.is_open())
    {
        while (getline(file, line))
        {
            readedLines.push_back(line);
        }
        file.close();
    }

    return readedLines;
}

void FileSource::saveAllLines(vector<string> strings)
{
    std::ofstream file(fileName);
    if (file.is_open())
    {
        for (int i = 0; i < strings.size(); i++)
        {
            file << strings[i] << "\n";
        }
    }
}
