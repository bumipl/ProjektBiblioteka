#include <string>
#include <vector>
// TUTAJ JEST POKAZANA PRZYKŁADOWA STRUKTURA USERA
// MOŻESZ POZNIEJ JEJ UŻYĆ
using namespace std;

#pragma once // pozwala na wielokrotne uzywanie strutkury w wielu pilkach

struct User
{

    int userID;

    string name;

    vector<int> borrowedBooks; // lista identyfikatorow ksiazek
                               /**
 * @brief wypozycza ksiazke po Id
 * 
 * @param bookID 
 */
    void borrowBook(int bookID);
    /**
 * @brief oddaje ksiazke po ID
 * 
 * @param bookID 
 */
    void backBook(int bookID);
};
