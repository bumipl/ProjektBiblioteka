#include <vector>
#include "User.h"

struct UserRepository
{
    std::vector<User> usersList;
/**
 * @brief zapisuje uzytkownika do listy uzytkownikow
 * 
 * @param user 
 */
    void save(User user);  
/**
 * @brief wyszukiwuje uzytkownika przy uzyciu ID 
 * 
 * @param userId 
 * @return User* - wskaznik na miejsce danego uzytkownika (w pamieci )
 */
    User *find(int userId); 
/**
 * @brief usuwa uzytkownika z listy uzytkownika
 * 
 * @param userId 
 */
    void remove(int userId); 
/**
 * @brief mozliwa edycja uzytkownika 
 * 
 * @param userID 
 * @param name 
 */
    void editUser(int userID,string name);
};
