#include "LibraryService.h"

void LibraryService::load()
{
    fileSource.fileName = "users.txt";
    vector<string> lines = fileSource.readAllLines();
    userRepositroy.usersList = mapToUser(lines);
    fileSource.fileName = "books.txt";
    lines = fileSource.readAllLines();
    bookRepository.booklist = mapToBook(lines);
}

void LibraryService::save()
{
    vector<string> lines = fromUserToString(userRepositroy.usersList);
    fileSource.fileName = "users.txt";
    fileSource.saveAllLines(lines);
    vector<string> lines = fromBookToString(bookRepository.booklist);
    fileSource.fileName = "books.txt";
    fileSource.saveAllLines(lines);
}
