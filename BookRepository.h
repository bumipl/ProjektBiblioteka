#include "Book.h"
#include <vector>

using namespace std;

struct BookRepository
{
    vector<Book> booklist;

    void save(Book book);

    Book find(string title);

    Book find(int bookID);

    void remove(string title);

    void editBook(int BookId, string title, string author);
};
