#include "LibraryMenu.h"

// Komunikaty
const string START_COMUNICATE = "SYSTEM OBSLUGI BIBLIOTEKI WITA...\n1->PANEL WYSZUKAJ/WYSWIETL\n2->PANEL DODAJ\n3->PANEL EDYTUJ\n4->PANEL USUN\n5->WYJDZ";
const string FIND_COMUNICATE = "WYSZUKAJ/WYSWIETL\n1->WYSWIETL WSZYSTKIE KSIAZKI\n2->WYSZUKAJ KSIAZKE\n3->WYSZUKAJ UZYTKOWNIKA";
const string ADD_COMUNICATE = "DODAJ\n1->DODAJ UZYTKOWNIKA\n2->DODAJ KSIAZKE";
const string EDIT_COMUNICATE = "DODAJ\n1->EDYTUJ UZYTKOWNIKA\n2->EDYTUJ KSIAZKE";
const string REMOVE_COMUNICATE = "DODAJ\n1->USUN UZYTKOWNIKA\n2->USUN KSIAZKE";

// FLAGI
const string QUIT = "5";

void LibraryMenu::openLibrary()
{
    // laduje dane z plikow na poczatku programu...
    service.load();
    while (option != QUIT)
    {
        cout << START_COMUNICATE << endl;
        getline(cin, option);
        switch (atoi(option.c_str()))
        {
        case 1:
            findPanel();
            break;
        case 2:
            addPanel();
            break;
        case 3:
            editPanel();
            break;
        case 4:
            removePanel();
            break;
        case 5:
            exit(0);
            break;
        }
    }
    service.save(); // zapisuje wszystkie zmiany po zakonczeniu programu
}

void LibraryMenu::findPanel()
{
    cout << FIND_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        // cout << "1. NOT IMPLEMENTED YET" << endl;
        service.showAllBooks();
        break;
    case 2:
        cout << "2. NOT IMPLEMENTED YET" << endl;
        break;
    case 3:
        cout << "3. NOT IMPLEMENTED YET" << endl;
        break;
    }
}

void LibraryMenu::addPanel()
{
    cout << ADD_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        cout << "1. NOT IMPLEMENTED YET" << endl;
        break;
    case 2:
        cout << "2. NOT IMPLEMENTED YET" << endl;
        break;
    }
}

void LibraryMenu::editPanel()
{
    cout << EDIT_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        cout << "1. NOT IMPLEMENTED YET" << endl;
        break;
    case 2:
        cout << "2. NOT IMPLEMENTED YET" << endl;
        break;
    }
}
void LibraryMenu::removePanel()
{
    cout << REMOVE_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        cout << "1. NOT IMPLEMENTED YET" << endl;
        break;
    case 2:
        cout << "2. NOT IMPLEMENTED YET" << endl;
        break;
    }
}
