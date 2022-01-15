#include <string>
#include <vector>
// TUTAJ JEST POKAZANA PRZYKŁADOWA STRUKTURA USERA
// MOŻESZ POZNIEJ JEJ UŻYĆ
using namespace std;

struct User
{
    vector<int> borrowedBooks; // pewnie bedzie mial vector<User>
    int userID;

    /**
     * wypozycza ksiazke
    */
    void borrowBook(int bookID);

    /**
     * oddaje ksiazke
    */
    void backBook(int bookID);
};
