#include <iostream>
#include <string>

using namespace std;

enum CoverType
{
    Hardcover,
    Paperback
};

class LibraryResource
{
protected:
    string title;
    string author;
    int price;

public:
    LibraryResource(string s, string a, int p)
    {
        title = s;
        author = a;
        price = p;
    }
};

class Book : public LibraryResource
{
private:
    CoverType covertype;

public:
    Book(string s, string a, int p, CoverType cover) : LibraryResource(s, a, p), covertype(cover) {}
};

class EBook : public LibraryResource
{
private:
    double filesize;

public:
    EBook(string s, string a, int p, double file) : LibraryResource(s, a, p), filesize(file) {}
};

class Audiobook : public LibraryResource
{
private:
    double time;

public:
    Audiobook(string s, string a, int p, double t) : LibraryResource(s, a, p), time(t) {}
};

int main()
{
    LibraryResource *resource_list[100];

    /** TASK 1:
        So that the following lines execute without errors
    */
    resource_list[0] = new Book("The Alchemist", "Paulo Coelho", 500, CoverType::Hardcover);
    resource_list[1] = new EBook("1984", "George Orwell", 300, 2.5);
    resource_list[2] = new Audiobook("Becoming", "Michelle Obama", 700, 120);
}
