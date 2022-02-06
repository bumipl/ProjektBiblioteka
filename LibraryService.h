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
  /**
 * @brief wczytuje dane z plikow tekstowych do user i book repository za pomoca fileSource i mappingService
 * 
 */
  void load();
  /**
   * @brief zapisuje z user i book repository do plikow tekstowych za pomoca fileSource i mappingService
   * 
   */
  void save();
  /**
   * @brief wypisuje na ekran wszystkie ksiazki 
   * 
   */
  void showAllBooks();
  /**
   * @brief wypisuje Name oraz  wszystkie ksiazki uzytkownika
   * 
   * @param userId 
   */
  void showUserBooks(int userId);
  /**
   * @brief Usuwa ksiazke z systemu
   * 
   * @param title 
   */
  void removeBook(string title);
  /**
   * @brief Zapisuje ksiazke przy uzyciu bookRepository
   * 
   * @param book 
   */
  void saveBook(Book book);
  /**
   * @brief Umozyliwia edycje ksiazki
   * 
   * @param bookId 
   * @param title 
   * @param author 
   */
  void editBook(int bookId, string title, string author);
  /**
   * @brief Usuwa uzytkownika z systemu
   * 
   * @param userId 
   */
  void removeUser(int userId);
  /**
   * @brief Zapisuje uzytkownika w systemie
   * 
   * @param user 
   */
  void saveUser(User user);
  /**
   * @brief Umozliwa edycje uzytkownika
   * 
   * @param userID 
   * @param name 
   */
  void editUser(int userID, string name);
  /**
   * @brief Wyswietla ksiazke przy uzyciu jej identyfikatora
   * 
   * @param bookId 
   */
  void showBook(int bookId);
  /**
   * @brief Wypozycza ksiazke uzytkownikowi
   * 
   * @param userId 
   * @param bookId 
   */
  void borrowBookByUser(int userId, int bookId);
  /**
   * @brief zwraca ksiazke 
   * 
   * @param userId 
   * @param bookId 
   */
  void backBookByUser(int userId, int bookId);
  /**
   * @brief Generuje nowe id ksiazki
   * 
   * @return int 
   */
  int getNewBookId();
  /**
   * @brief Generuje nowe id uzytkownika
   * 
   * @return int 
   */
  int getNewUserId();
};
