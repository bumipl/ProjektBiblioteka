#include "Book.h"
#include <vector>

using namespace std;

struct BookRepository
{
    vector<Book> booklist;

    void save(Book book);

    Book find(string title);

    void remove(string title);
};
