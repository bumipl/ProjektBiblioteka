#include "LibraryService.h"

using namespace std;

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
    lines = fromBookToString(bookRepository.booklist);
    fileSource.fileName = "books.txt";
    fileSource.saveAllLines(lines);
}

void LibraryService::showAllBooks()
{
    for (int i = 0; i < bookRepository.booklist.size(); i++)
    {
        cout << "BookId: " << bookRepository.booklist[i].bookID;
        cout << " Tytul ksiazki: " << bookRepository.booklist[i].title;
        cout << " Autor ksiazki: " << bookRepository.booklist[i].author << endl;
    }
}

void LibraryService::showUserBooks(int userId)
{
    vector<int> userBorrowedBooks = userRepositroy.find(userId)->borrowedBooks;
    cout << userRepositroy.find(userId)->name << endl;
    for (int i = 0; i < userBorrowedBooks.size(); i++)
    {
        Book book = bookRepository.find(userBorrowedBooks[i]);
        cout << "BookId: " << book.bookID;
        cout << " Tytul ksiazki: " << book.title;
        cout << " Autor ksiazki: " << book.author << endl;
    }
}

void LibraryService::removeBook(string title)
{
    bookRepository.remove(title);
}
void LibraryService::saveBook(Book book)
{
    bookRepository.save(book);
}
void LibraryService::editBook(int bookId, string title, string author)
{
    bookRepository.editBook(bookId, title, author);
}
void LibraryService::removeUser(int userId)
{
    userRepositroy.remove(userId);
}
void LibraryService::saveUser(User user)
{
    userRepositroy.save(user);
}
void LibraryService::editUser(int userID, string name)
{
    userRepositroy.editUser(userID, name);
}
void LibraryService::showBook(int bookId)
{
    Book book;
    book = bookRepository.find(bookId);
    cout << book.bookID << " " << book.title << " " << book.author << endl;
}

int LibraryService::getNewUserId()
{
    return userRepositroy.usersList.size() + 1;
}

int LibraryService::getNewBookId()
{
    return bookRepository.booklist.size() + 1;
}
void LibraryService::borrowBookByUser(int userId, int bookId)
{
    userRepositroy.find(userId)->borrowBook(bookId);
}
void LibraryService::backBookByUser(int userId, int bookId)
{
    userRepositroy.find(userId)->backBook(bookId);
}
