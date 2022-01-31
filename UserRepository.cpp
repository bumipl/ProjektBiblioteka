#include "UserRepository.h" // wczytujemy definicje z pliku nagłowkowego

UserRepository::UserRepository() {}

// tak zapisujemy instrukcje metody save
void UserRepository::save(User user)
{
    usersList.push_back(user);
}

User UserRepository::find(int userId)
{
    for (int i = 0; i < usersList.size(); i++)
    {
        if (usersList[i].userID == userId)
        {
            return usersList[i];
        }
    }
    User u;
    u.userID = -1;
    return u;
}

void UserRepository::remove(int userId)
{
    for (int i = 0; i < usersList.size(); i++)
    {
        if (usersList[i].userID == userId)
        {
            usersList.erase(usersList.begin() + i);
            return;
        }
    }
}
void UserRepository::EditUser(int userID,string name)
{
    for (int i = 0; i<usersList.size(); i++)
    {
        if (usersList[i].userID == userID)
        {
            if (name!= "")
            {
                usersList[i].name = name;
            }
            return;
        }
    }
}
