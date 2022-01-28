#include <string>
#include <iostream>

using namespace std;

// TODO przekazać LibraryService
struct LibraryMenu
{
    string option;
    void openLibrary();
    void findPanel();
    void addPanel();
    void editPanel();
    void removePanel();
};
