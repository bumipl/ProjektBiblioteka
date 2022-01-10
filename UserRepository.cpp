#include "UserRepository.h" // wczytujemy definicje z pliku nagłowkowego

UserRepository::UserRepository() {}

// tak zapisujemy instrukcje metody save
void UserRepository::save(User user)
{
    // Mozna tu korzystac ze wszystkich zmiennych wewnatrz struktury UserRepository

    // twoj kod zapisujący uzytkownika
}

User UserRepository::find(int userId)
{
    // twoj kod wyszukujacy uzytkownika
    User user;
    return user;
}

void UserRepository::remove(int userId)
{
    // twoj kod usuwajacy uzytkownika
}