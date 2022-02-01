#include <string>
#include "LibraryService.h"

using namespace std;


struct LibraryMenu
{
    string option;
    LibraryService service;
    void openLibrary();
    void findPanel();
    void addPanel();
    void editPanel();
    void removePanel();
};
