#include <string>
#include <vector>
#include "BookRepository.h"
#include "UserRepository.h"
#include "FileSource.h"
#include "MappingService.h"


using namespace std;


struct LibraryService
{
  BookRepository bookRepository;
  UserRepository userRepositroy;
  FileSource fileSource;

  void load();
  void save();
};

