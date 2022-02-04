#include <vector>
#include "User.h"

struct UserRepository
{
    std::vector<User> usersList;

    // konstruktor - wywołuje się podczas tworzenia obiektu
    UserRepository();

    void save(User user); // zapisuje uzytkownika o danym id

    User *find(int userId); // wyszukuje uzytkownika o danym id

    void remove(int userId); //usuwa uzytkownika o danym id

    void editUser(int UserID,string name);
};
