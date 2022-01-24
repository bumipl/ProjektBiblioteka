#include "BookRepository.h"

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
    o.bookID =1;
    return o;
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