#include <iostream>
#include <string>

using namespace std;

struct User
{
 string userID;
   string borrowBook;
    int liczbawypozyczen;
    string bookID;
    string title;
    
    void ksiazka()
    {
    	cout<<"Podaj id ksiazki"<<endl;
    	if(BookID)
	}
    
    
};
    
int main ()
{

    const int n = 1;
    User ksiazki[n];
    for (int i =0 ;i<n;i++)
    {
cout<< "podaj id uzytkownika: ";
getline(cin,ksiazki[i].userID) ;
cout<< "podaj id wypozyczonej ksiazki: ";
getline(cin,ksiazki[i].borrowBook);
cout<<"podaj liczbe wypozyczne: ";
cin>> ksiazki[i].liczbawypozyczen;
cin.ignore();
    }
for (int i=0 ; i<n;i++)
{
    cout<<ksiazki[i].userID<<"wypozyczyl ";
    cout<< "\"" << ksiazki[i].borrowBook<< "\""<<", ";
    cout<< "liczba wypozyczen: "<<ksiazki[i].liczbawypozyczen<<endl;
}
cout<<"ksiazki które nie byly wypo¿yczone"<<endl;
for( int i =0;i<n;i++)
{
	if(ksiazki[i].liczbawypozyczen==0)
	{
	
		cout<<ksiazki[i].borrowBook<<endl;	
	}
}

return 0;
}
