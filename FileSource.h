#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::vector;

struct FileSource
{
    string fileName;

    /**
 * @brief czyta wszystkie linie z pliku tekstowego
 * 
 * @return vector<string> 
 */
    vector<string> readAllLines();
    /**
 * @brief zapisuje cala liste stringow
 * 
 * @param strings - vector lini tekstowych
 */
    void saveAllLines(vector<string> strings);
};
