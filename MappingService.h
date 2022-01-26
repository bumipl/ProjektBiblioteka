#include <vector>
#include <string>
#include "Book.h"
#include <sstream>
#include "User.h"

using namespace std;

vector<Book> mapToBook(vector<string> bookAsString); //  zwraca vector ksiazek , argument vector stringow

vector<string> fromBookToString(vector<Book> books); // na odwrot

vector<User> mapToUser(vector<string> userAsString);

vector<string> fromUserToString(vector<User> users);
