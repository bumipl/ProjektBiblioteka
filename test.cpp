#include <iostream>
using namespace std;

struct Book
{
  int id;
  string title; 

  void print(){
    cout <<id<<" "<<title<<endl;  
  }
};

int borrowBook(){
    return 0;
}

int main()
{
    Book book;
    book.id = 1;
    book.title = "Fortnite Prawdziwa Przygoda";

    Book book2 = {2,"Ala ma kota"};
    
    book.print();
    book2.print();
    cout << "helllooooo" << endl;
    
    return 0;
}
