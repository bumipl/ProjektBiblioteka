#include <vector>
#include <string>
#include "Book.h"
#include <sstream>
#include "User.h"

using namespace std;

vector<Book> mapToBook(vector<string> bookAsString); 

vector<string> fromBookToString(vector<Book> books);

vector<User> mapToUser(vector<string> userAsString);

vector<string> fromUserToString(vector<User> users);
