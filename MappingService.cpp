#include "MappingService.h"

using namespace std;

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

vector<User> mapToUser(vector<string> userAsString)
{
    vector<User> users;

    for (int i = 0; i < userAsString.size(); i++)
    {
        vector<string> splittedString = split(userAsString[i]);
        User u;
        u.userID = atoi(splittedString[0].c_str()); // atoi - zmiana tablicy charow na inta , c_Str zamienia stringa na tablice czarow
        u.name = splittedString[1];
        for (int j = 2; j < splittedString.size(); j++)
        {
            u.borrowedBooks.push_back(atoi(splittedString[j].c_str()));
        }

        users.push_back(u);
    }
    return users;
}

vector<string> fromUserToString(vector<User> users)
{
    vector<string> strings;
    for (int i = 0; i < users.size(); i++)
    {
        string userAsString = "";
        userAsString = userAsString + to_string(users[i].userID);
        userAsString = userAsString + "," + users[i].name;
        for (int j = 0; j < users[i].borrowedBooks.size(); j++)
        {
            userAsString = userAsString + "," + to_string(users[i].borrowedBooks[j]);
        }
        strings.push_back(userAsString);
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
