#include <iostream>
#include <vector>

using std::cout;
using std::endl;

#define NUMBER_OF_OBJECTS 10

struct ExampleObject
{
    int id;
    std::string name;

    void display()
    {
        cout << "{\"id\" : " << id << ", \"name\" : " << name << "\n";
    }
};

struct ExampleStorage
{
    ExampleObject storage[NUMBER_OF_OBJECTS];
    int lastObjectNumber = 0;

    void insert(ExampleObject object)
    {
        if (lastObjectNumber >= NUMBER_OF_OBJECTS)
        {
            cout << "STORAGE FULL" << endl;
            return;
        }

        storage[lastObjectNumber] = object;

        lastObjectNumber++;
    }

    ExampleObject load(int id)
    {
        if (id > NUMBER_OF_OBJECTS || id < 1)
        {
            cout << "INCORRECT ID" << endl;
            return getNull();
        }

        return storage[id - 1];
    }

    void remove(ExampleObject object)
    {
        if (object.id > NUMBER_OF_OBJECTS || object.id < 1)
        {
            cout << "INCORRECT OBJECT ID" << endl;
            return;
        }

        storage[object.id - 1] = getNull();
    }

    ExampleObject getNull()
    {
        ExampleObject null_e = {-1, ""};
        return null_e;
    }
};

void initStorage();

int main()
{
    ExampleStorage storage;

    ExampleObject object1 = {1, "Title1"};
    ExampleObject object2 = {2, "Title2"};

    storage.insert(object1);
    storage.insert(object2);

    storage.load(1).display();
    storage.load(2).display();

    storage.remove(object1);

    storage.load(2).display();
    storage.load(1).display();

    return 0;
}
