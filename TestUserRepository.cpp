#include <iostream>
#include "UserRepository.h"

int main()
{
    // dane
    UserRepository repository;
    User adam, mariola, grzes;
    adam.userId = 1;
    adam.username = "Adam";

    mariola.userId = 2;
    mariola.username = "Mariola";

    grzes.userId = 3;
    grzes.username = "Grzes";

    // operacja
    repository.save(adam);
    repository.save(mariola);
    repository.save(grzes);

    // sprawdzenie
    std::cout << "wynik testu 1 : "
              << "oczekiwano : Adam otrzymano : " << repository.find(1).username << std::endl;
    std::cout << "wynik testu 2 : "
              << "oczekiwano : Mariola otrzymano : " << repository.find(2).username << std::endl;
    std::cout << "wynik testu 3 : "
              << "oczekiwano : Grześ otrzymano : " << repository.find(3).username << std::endl;

    // operacja
    repository.remove(2);
    std::cout << "wynik testu 4 : "
              << "oczekiwano : 2 otrzymano : " << repository.usersList.size() << std::endl;
}