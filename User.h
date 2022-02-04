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

    vector<int> borrowedBooks;

    void borrowBook(int bookID); // wypozycza

    void backBook(int bookID); //oddaje ksiazke
};
