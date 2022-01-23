#include <iostream>
#include <string>
#include "UserRepository.h"
#include "BookRepository.h"

using namespace std;

int main()
{
    BookRepository b;
    cout << b.booklist.size() << endl;
    Book g, h, j;
    g.title = "Kot w butach";
    h.title = "pies w butah";
    j.title = "kaczka w butah";
    g.bookID = 1;
    h.bookID = 2;
    j.bookID = 3;
    b.save(g);
    b.save(h);
    b.save(j);
    cout << b.booklist.size() << endl;

    cout << b.find("Kot w butach").title << endl;
    Book f = b.find("pies w butah");
    cout << f.bookID << endl;
    cout << b.find("pies w butah").bookID << endl;

    b.remove("kaczka w butah");
    cout << b.booklist.size() << endl;

    cout << b.find("kaczka w butah").bookID << endl;
    //UserRepository x;
    // cout << x.usersList.size() << endl;
    // User y,z,v;
    // y.userID = 55;
    //z.userID = 67;
    //v.userID =90;
    // x.save(y);
    // x.save(z);
    //x.save(v);
    //cout << x.usersList.size() << endl;

    // cout << x.find(55).userID << endl;
    //cout<<x.find(90).userID<<endl;

    //   x.remove(67);
    //cout << x.usersList.size() << endl;
    //cout<<x.find(67).userID<<endl;

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
