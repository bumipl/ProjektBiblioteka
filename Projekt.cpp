#include <iostream>
#include <string>

using namespace std;

struct User
{
    int borrowedBooks[10];
    int userID;
    int numberOfBooks = 0;

    void borrowBook(int bookID)
    {
        borrowedBooks[numberOfBooks] = bookID;
        numberOfBooks++;
    }
};
struct Book
{
};
int main()
{
    User michalek;
    michalek.userID = 1;

    michalek.borrowBook(3);
    cout << michalek.borrowedBooks[0] << endl;
    return 0;
}
