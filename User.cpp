#include "User.h"

void User::borrowBook(int bookID)
{
    borrowedBooks.push_back(bookID);
}

void User::backBook(int bookID)
{
    for (int i = 0; i < borrowedBooks.size(); i++)
    {
        if (borrowedBooks[i] == bookID)
        {
            borrowedBooks.erase(borrowedBooks.begin() + i);
            return;
        }
    }
}

 