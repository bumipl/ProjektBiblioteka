#include "UserRepository.h" // wczytujemy definicje z pliku nagłowkowego

UserRepository::UserRepository() {}

// tak zapisujemy instrukcje metody save
void UserRepository::save(User user)
{
}

User UserRepository::find(int userId)
{

    User user;
    user.userID = -1;

    return user;
}

void UserRepository::remove(int userId)
{
}
