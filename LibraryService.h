#include <string>
#include <vector>
#include <iostream>
#include "BookRepository.h"
#include "UserRepository.h"
#include "FileSource.h"
#include "MappingService.h"

using namespace std;

#pragma once
struct LibraryService
{
  BookRepository bookRepository;
  UserRepository userRepositroy;
  FileSource fileSource;

  void load();
  void save();
  void showAllBooks();
  void showUserBooks(int userId);
  void removeBook(string title);
  void saveBook(Book book);
  void editBook(int bookId, string title, string author);
  void removeUser(int userId);
  void saveUser(User user);
  void editUser(int userID, string name);
};
