#include "UserRepository.h"// wczytujemy definicje z pliku nagłowkowego
#include <fstream>
#include <stdio.h>

UserRepository::UserRepository() {}

// tak zapisujemy instrukcje metody save
void UserRepository::save(User user)
{
     fstream BookList;
     BookList.open("listaksiazek.txt");
     string line;

      do
     {
          getline (BookList, line);
         cout << line <<endl;
     } 
     while (line !="");
     BookList.close();
    
}

User UserRepository::find(int userId)
{

    User user;
    fstream BookList;
    string ID;
   
   
    

    return user;
}

void UserRepository::remove(int userId)
  

{
    int number, i;
    fstream remove;
    remove.open( "listaksiazek.txt", ios::in | ios::out );
    if( remove.good() )
    {
        string verse, text;
        cout << "Podaj nr wiersza ksiazki do skasowania: ";
        i = 1;
        cin >> number;
        cin.ignore();
       
        while( !remove.eof() )
        {
            getline( remove, verse );
            if( i != number )
            {
                text = verse;
                cout << text << endl;
             
            }
            i++;
        }
        remove.close();
    }
    else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;
   
}
  
  