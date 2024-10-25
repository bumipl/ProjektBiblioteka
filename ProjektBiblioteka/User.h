#pragma once
#include <string>
#include <vector>

using namespace std;

struct User
{

    int userID;

    string name;

    vector<int> borrowedBooks;

    void borrowBook(int bookID);

    void backBook(int bookID);
};
