#include <iostream>
#include <string>
#include "UserRepository.h"
#include "BookRepository.h"
#include "MappingService.h"
#include "FileSource.h"

using namespace std;

int main()
{

  // FileSource test;

  // test.fileName = "users.txt";

  // vector<User> users;
  // User u;
  // users = mapToUser(test.readAllLines());
  // u.userID = 4;
  // u.name = "tomek Gwozdz";
  // u.borrowBook(4);
  // u.borrowBook(3);
  // users.push_back(u);
  // for (int i = 0; i < users.size(); i++)
  // {
  //   cout << users[i].userID << " ";
  //   cout << users[i].name << endl;
  //   for (int j = 0; j < users[i].borrowedBooks.size(); j++)
  //   {
  //     cout << users[i].borrowedBooks[j] << endl;
  //   }
  // }
  // test.saveAllLines(fromUserToString(users));
  // vector<Book> books;
  // Book g, h, j;
  // g.title = "Kot w butach";
  // h.title = "pies w butah";
  // j.title = "kaczka w butah";
  // g.bookID = 1;
  // h.bookID = 2;
  // j.bookID = 3;
  // g.author = "ttt";
  // h.author = "hhh";
  // j.author = "jjj";
  // books.push_back(g);
  // books.push_back(h);
  // books.push_back(j);
  // vector<string> text = fromBookToString(books);

  // for (int i = 0; i < text.size(); i++)
  // {
  //   cout << text[i] << endl;
  // }

  //  BookRepository b;
  //cout << b.booklist.size() << endl;
  // Book g, h, j;
  // g.title = "Kot w butach";
  // h.title = "pies w butah";
  // j.title = "kaczka w butah";
  // g.bookID = 1;
  // h.bookID = 2;
  // j.bookID = 3;
  // b.save(g);
  // b.save(h);
  // b.save(j);
  // cout << b.booklist.size() << endl;

  // cout << b.find("Kot w butach").title << endl;
  // Book f = b.find("pies w butah");
  // cout << f.bookID << endl;
  // cout << b.find("pies w butah").bookID << endl;

  // b.remove("kaczka w butah");
  // cout << b.booklist.size() << endl;

  // cout << b.find("kaczka w butah").bookID << endl;
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
