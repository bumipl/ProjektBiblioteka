#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::vector;

struct FileSource
{
    string fileName;

    vector<string> readAllLines();

    void saveAllLines(vector<string> strings);
};
