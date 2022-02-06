#include "Book.h"
#include <vector>

using namespace std;

struct BookRepository
{
    vector<Book> booklist;
    /**
 * @brief Zapisuje ksiazki do listy ksiazek.
 * 
 * @param book - ksiazka
 */
    void save(Book book);
    /**
 * @brief Zanduje ksiazke w liscie ksiazek po tytule
 * 
 * @param title - tytul ksiazki
 * @return Book - ksiazke
 */
    Book find(string title);

    /**
 * @brief Zanduje ksiazke w liscie ksiazek po ID
 * 
 * @param bookID - identyfikator ksiazki
 * @return Book - ksiazka
 */
    Book find(int bookID);

    /**
 * @brief Usuwa ksiazke z listy ksiazek przy uzyciu tytulu
 * 
 * @param title - tytul
 */
    void remove(string title);
    /**
 * @brief edytuje ksiazke 
 * 
 * @param BookId - identyfikator ksiazki
 * @param title - tytul
 * @param author - autor
 */
    void editBook(int BookId, string title, string author);
};
