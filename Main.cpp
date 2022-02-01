#include <string>
#include "LibraryService.h"
#include "LibraryMenu.h"

using namespace std;

int main()
{
    LibraryService service;
    LibraryMenu menu;
    menu.service = service;
    menu.openLibrary();
    return 0;
}
