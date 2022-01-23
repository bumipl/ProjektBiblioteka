#include <iostream>
#include <string>
#include "UserRepository.h"


using namespace std;

struct Book
{
};
int main()
{
    
    UserRepository x;
    cout << x.usersList.size() << endl;
    User y,z,v;
    y.userID = 55;
    z.userID = 67;
    v.userID =90;
    x.save(y);  
    x.save(z);
    x.save(v);
    cout << x.usersList.size() << endl;
    
    cout << x.find(55).userID << endl;
cout<<x.find(90).userID<<endl;

    
    x.remove(67);
    cout << x.usersList.size() << endl;
    cout<<x.find(67).userID<<endl;

    // User michalek;
    // michalek.userID = 1;
    // michalek.borrowBook(3);
    // cout << michalek.borrowedBooks[0] << endl;

    // michalek.borrowBook(2);
    // cout << michalek.borrowedBooks[1] << endl;

    // michalek.borrowBook(5);
    // cout<< michalek.borrowedBooks[2]<<endl;

    // michalek.backBook(3);
    // michalek.backBook(5);
    // cout<< michalek.borrowedBooks[0]<<endl;


    return 0;
}
