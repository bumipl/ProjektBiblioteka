#include <vector>
#include <string>
#include "Book.h"

using namespace std;

vector<Book> mapToBook(vector<string> bookAsString); //  zwraca vector ksiazek , argument vector stringow

vector<string> fromBookToString(vector<Book> books); // na odwrot
