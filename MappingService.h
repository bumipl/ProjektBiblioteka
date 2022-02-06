#include <vector>
#include <string>
#include "Book.h"
#include <sstream>
#include "User.h"

using namespace std;
/**
 * @brief  liste stringow zamienia na liste ksiazek
 * 
 * @param bookAsString - vector stringow 
 * @return vector<Book> 
 */
vector<Book> mapToBook(vector<string> bookAsString);

/**
 * @brief liste ksiazek zamienia na liste stringow
 * 
 * @param books 
 * @return vector<string> 
 */
vector<string> fromBookToString(vector<Book> books);
/**
 * @brief liste stringow zmienia na liste uzytkownikow
 * 
 * @param userAsString -vector stringow
 * @return vector<User> 
 */
vector<User> mapToUser(vector<string> userAsString);
/**
 * @brief liste uzytkownik zamienia na liste stringow
 * 
 * @param users 
 * @return vector<string> 
 */
vector<string> fromUserToString(vector<User> users);
