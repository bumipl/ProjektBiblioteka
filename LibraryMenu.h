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
    void libraryPanel();

    void findBook();
    void findUser();
    void addUser();
    void addBook();
    void editUser();
    void editBook();
    void removeUser();
    void removeBook();

    void borrowBookbyUser();
    void backBookbyUser();

};
