#include <iostream>
#include <string>

using namespace std;

struct biblioteka
{
    string iduzytkownika;
    string idwypozyczonejksiazki;
  
    int liczbawypozyczen;
};
    
int main ()
{

    const int n = 1;
    biblioteka ksiazki[n];
    for (int i =0 ;i<n;i++)
    {
cout<< "podaj id uzytkownika: ";
getline(cin,ksiazki[i].iduzytkownika) ;
cout<< "podaj id wypozyczonej ksiazki: ";
getline(cin,ksiazki[i].idwypozyczonejksiazki);
cout<<"podaj liczbe wypozyczne: ";
cin>> ksiazki[i].liczbawypozyczen;
cin.ignore();
    }
for (int i=0 ; i<n;i++)
{
    cout<<ksiazki[i].iduzytkownika<<"wypozyczyl ";
    cout<< "\"" << ksiazki[i].idwypozyczonejksiazki<< "\""<<", ";
    cout<< "liczba wypozyczen: "<<ksiazki[i].liczbawypozyczen<<endl;
}
cout<<"ksiazki które nie byly wypo¿yczone"<<endl;
for( int i =0;i<n;i++)
{
	if(ksiazki[i].liczbawypozyczen==0)
	{
	
		cout<<ksiazki[i].idwypozyczonejksiazki<<endl;	
	}
}

return 0;
}
