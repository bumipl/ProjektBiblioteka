#include "LibraryMenu.h"

using namespace std;
const string START_COMUNICATE = "\n1->PANEL WYSZUKAJ/WYSWIETL\n2->PANEL DODAJ\n3->PANEL EDYTUJ\n4->PANEL USUN\n5->PANEL WYPOZYCZ\n6->WYJDZ";
const string FIND_COMUNICATE = "WYSZUKAJ/WYSWIETL\n1->WYSWIETL WSZYSTKIE KSIAZKI\n2->WYSZUKAJ KSIAZKE\n3->WYSZUKAJ UZYTKOWNIKA";
const string ADD_COMUNICATE = "DODAJ\n1->DODAJ UZYTKOWNIKA\n2->DODAJ KSIAZKE";
const string EDIT_COMUNICATE = "DODAJ\n1->EDYTUJ UZYTKOWNIKA\n2->EDYTUJ KSIAZKE";
const string REMOVE_COMUNICATE = "DODAJ\n1->USUN UZYTKOWNIKA\n2->USUN KSIAZKE";
const string BORROW_COMUNICATE = "WYPOZYCZ\n1->WYPOZYCZ KSIAZKE\n2->ODDAJ KSIAZKE";

const string QUIT = "6";

void LibraryMenu::openLibrary()
{
    
    service.load();
    cout << "System Obslugi biblioteki wita" << endl;
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
            libraryPanel();
            break;
        case 6:
            option = QUIT;
            break;
        }
    }
    service.save(); 
}

void LibraryMenu::findPanel()
{
    cout << FIND_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        service.showAllBooks();
        break;
    case 2:
        findBook();
        break;
    case 3:
        findUser();
        break;
    }
}
void LibraryMenu::libraryPanel()
{
    cout << BORROW_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        borrowBookbyUser();
        break;

    case 2:
        backBookbyUser();
        break;
    }
}
void LibraryMenu::findUser()
{
    string userIds;
    cout << "Wprowadz ID wyszukiwanego Uzytkownika" << endl;
    getline(cin, userIds);
    int userId = atoi(userIds.c_str());
    service.showUserBooks(userId);
}
void LibraryMenu::findBook()
{
    string bookIds;
    cout << "Wprowadz ID wyszukiwanej ksiazki" << endl;
    getline(cin, bookIds);
    int bookId = atoi(bookIds.c_str());
    service.showBook(bookId);
}

void LibraryMenu::addPanel()
{
    cout << ADD_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        addUser();
        break;
    case 2:
        addBook();
        break;
    }
}
void LibraryMenu::addUser()
{
    cout << "Wprowadz imie i nazwisko nowego uzytkownika" << endl;
    User user;
    getline(cin, user.name);
    user.userID = service.getNewUserId();
    service.saveUser(user);
}
void LibraryMenu::addBook()
{
    cout << "Wprowadz Tytul ksiazki" << endl;
    Book book;
    getline(cin, book.title);
    cout << "Wprowadz Autora ksiazki" << endl;
    getline(cin, book.author);
    book.bookID = service.getNewBookId();
    service.saveBook(book);
}

void LibraryMenu::editPanel()
{
    cout << EDIT_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        editUser();
        break;
    case 2:
        editBook();
        break;
    }
}
void LibraryMenu::editUser()
{
    string userIds;
    string userName;
    cout << "Wprowadz ID edytowanego Uzytkownika" << endl;
    getline(cin, userIds);
    int userId = atoi(userIds.c_str());
    cout << "Podaj Imie i naziwsko edytowanego Uzytkownika" << endl;
    getline(cin, userName);
    service.editUser(userId, userName);
}
void LibraryMenu::editBook()
{
    string bookIds;
    string bookTitle;
    string bookAuthor;
    cout << "Wprowadz Id edytowanej ksiazki" << endl;
    getline(cin, bookIds);
    int bookId = atoi(bookIds.c_str());
    cout << "Wprowadz tytul edytowanej ksiazki" << endl;
    getline(cin, bookTitle);
    cout << "Wprowadz autora edytowanej ksiazki" << endl;
    getline(cin, bookAuthor);
    service.editBook(bookId, bookTitle, bookAuthor);
}
void LibraryMenu::removePanel()
{
    cout << REMOVE_COMUNICATE << endl;
    getline(cin, option);
    switch (atoi(option.c_str()))
    {
    case 1:
        removeUser();
        break;
    case 2:
        removeBook();
        break;
    }
}
void LibraryMenu::removeUser()
{
    string userIds;
    cout << "Wprowadz ID wyszukiwanego Uzytkownika" << endl;
    getline(cin, userIds);
    int userId = atoi(userIds.c_str());
    service.removeUser(userId);
}
void LibraryMenu::removeBook()
{
    string bookTitle;
    cout << "Podaj tytul usuwanej ksiazki" << endl;
    getline(cin, bookTitle);
    service.removeBook(bookTitle);
}
void LibraryMenu::borrowBookbyUser()
{
    string userIds, bookIds;

    cout << "Wprowadz Id uzytkownika ktoremu chcesz wypozyczyc ksiakze" << endl;
    getline(cin, userIds);
    int userId = atoi(userIds.c_str());
    cout << "Wprowadz Id wypozyczanej ksiazki" << endl;
    getline(cin, bookIds);
    int bookId = atoi(bookIds.c_str());
    service.borrowBookByUser(userId, bookId);
}
void LibraryMenu::backBookbyUser()
{
    string userIds, bookIds;

    cout << "Wprowadz Id uzytkownika ktoremu chcesz zwrocic ksiakze" << endl;
    getline(cin, userIds);
    int userId = atoi(userIds.c_str());
    cout << "Wprowadz Id wypozyczanej ksiazki" << endl;
    getline(cin, bookIds);
    int bookId = atoi(bookIds.c_str());
    service.backBookByUser(userId, bookId);
}