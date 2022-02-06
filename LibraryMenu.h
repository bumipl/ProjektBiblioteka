#include <string>
#include "LibraryService.h"

using namespace std;

struct LibraryMenu
{
    string option;
    LibraryService service;
    /**
     * @brief Rozpoczyna dzialanie projektu
     * 
     */
    void openLibrary();
    /**
     * @brief Panel sluzacy do wyswietlania ksiazek i uzykownika
     * 
     */
    void findPanel();
    /**
     * @brief Panel sluzacy do dodawania ksiazke i uzytkownika
     * 
     */
    void addPanel();
    /**
     * @brief Panel sluzacy do edycji danych uzytkownika i ksiazki
     * 
     */
    void editPanel();
    /**
     * @brief Panel sluzacy do usuwania uzytkownika i ksiazki
     * 
     */
    void removePanel();
    /**
     * @brief Panel sluzacy do wypozyczenia i zwrotu ksiazki
     * 
     */
    void libraryPanel();
    /**
 * @brief Podpanel sluzacy do wyszukania ksiazki
 * 
 */
    void findBook();
    /**
     * @brief Pod panel sluzacy do wyszukania uzytkownika
     * 
     */
    void findUser();
    /**
     * @brief Podpanel sluzacy do dodania uzytkownika
     * 
     */
    void addUser();
    /**
     * @brief Podpanel sluzacy do dodania ksiazki
     * 
     */
    void addBook();
    /**
     * @brief Podpanel sluzacy do edycji uzytkownika
     * 
     */
    void editUser();
    /**
     * @brief Podpanel sluzacy do edycji ksiazki
     * 
     */
    void editBook();
    /**
     * @brief Podpanel sluzacy do usuniecia uzytkownika
     * 
     */
    void removeUser();
    /**
     * @brief Podpanel sluzacy do usuniecia ksiazki
     * 
     */
    void removeBook();
    /**
 * @brief Podpanel sluzacy do wypozyczenia ksiazki uzytkownikowi
 * 
 */
    void borrowBookbyUser();
    /**
     * @brief Podpanel sluzacy do oddania ksiazki 
     * 
     */
    void backBookbyUser();
};
