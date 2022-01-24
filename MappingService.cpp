#include "MappingService.h"

vector<Book> mapToBook(vector<string> bookAsString)
{
    vector<Book> books;

    return books;
}

vector<string> fromBookToString(vector<Book> books)
{
    vector<string> strings;
    for (int i = 0; i < books.size(); i++)
    {
        string bookAsString = "";
        bookAsString = bookAsString + to_string(books[i].bookID) + ",";
        bookAsString = bookAsString + books[i].title + ",";
        bookAsString = bookAsString + books[i].author;
        strings.push_back(bookAsString);
    }
    return strings;
}
