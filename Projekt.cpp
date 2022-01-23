#include <iostream>
#include <string>
#include <User.h>
#include <UserRepository.h>


using namespace std;

struct Book
{
};
int main()
{

    User michalek;
    michalek.userID = 1;
    michalek.borrowBook(3);
    cout << michalek.borrowedBooks[0] << endl;

    michalek.borrowBook(2);
    cout << michalek.borrowedBooks[1] << endl;

    michalek.borrowBook(5);
    cout<< michalek.borrowedBooks[2]<<endl;

    michalek.backBook(3);
    michalek.backBook(5);
    cout<< michalek.borrowedBooks[0]<<endl;


    return 0;
}
