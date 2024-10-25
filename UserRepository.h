#include <vector>
#include "User.h"

struct UserRepository
{
    std::vector<User> usersList;

    
    UserRepository();

    void save(User user);

    User* find(int userId); 

    void remove(int userId); 

    void editUser(int UserID, string name);
};
