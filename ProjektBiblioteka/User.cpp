#include "User.h"
using namespace std;

void User::borrowBook(int bookID)
{
    this->borrowedBooks.push_back(bookID);
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

