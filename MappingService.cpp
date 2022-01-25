#include "MappingService.h"
vector<string> split(string text);

vector<Book> mapToBook(vector<string> bookAsString)
{
    vector<Book> books;

    for (int i = 0; i < bookAsString.size(); i++)
    {
        vector<string> splittedString = split(bookAsString[i]);
        Book b;
        b.bookID = atoi(splittedString[0].c_str()); // atoi - zmiana tablicy charow na inta , c_Str zamienia stringa na tablice czarow
        b.title = splittedString[1];
        b.author = splittedString[2];
        books.push_back(b);
    }
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

vector<string> split(string text)
{
    stringstream ss(text);
    vector<string> result;

    while (ss.good())
    {
        std::string substr;
        getline(ss, substr, ',');
        result.push_back(substr);
    }
    return result;
}
