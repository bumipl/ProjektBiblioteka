#include "BookRepository.h"

using namespace std;

void BookRepository::save(Book book)
{
    booklist.push_back(book);
}

Book BookRepository::find(string title)
{
    for (int i = 0; i < booklist.size(); i++)
    {
        if (booklist[i].title == title)
        {
            return booklist[i];
        }
    }

    Book o;
    o.bookID = -1;
    return o;
}
Book BookRepository::find(int bookId)
{
    for (int i = 0; i < booklist.size(); i++)
    {
        if (booklist[i].bookID == bookId)
        {
            return booklist[i];
        }
    }
    Book b;
    b.bookID = -1;
    return b;
}

void BookRepository::remove(string title)
{
    for (int i = 0; i < booklist.size(); i++)
    {
        if (booklist[i].title == title)
        {
            booklist.erase(booklist.begin() + i);
            return;
        }
    }
}
void BookRepository::editBook(int bookID, string title, string author)
{
    for (int i = 0; i < booklist.size(); i++)
    {
        if (booklist[i].bookID == bookID)
        {
            if (author != "")
            {
                booklist[i].author = author;
            }
            if (title != "")
            {
                booklist[i].title = title;
            }
            return;
        }
    }
}
