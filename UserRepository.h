#include <vector>
#include "User.h"

struct UserRepository
{
    std::vector<User> usersList;

    // konstruktor - wywołuje się podczas tworzenia obiektu
    UserRepository();

    /**
     *  Definicja metod czyli co zwracają i jakie argumenty przyjmują
     *  Natomiast jak działają jest opisane w pliku UserRepository.cpp
     */

    /**
     * zapisuje uytkownika
    */
    void save(User user);

    /**
     * wyszukuje uzytkownika po id
    */
    User find(int userId);

    /**
     * usuwa uzytkownika o danym id
    */
    void remove(int userId);
};