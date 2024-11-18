#include<iostream>
#include<string>

using namespace std;

enum CoverType{Hardcover, Paperback};

class LibraryResource
{
    protected:
        string title;
        string author;
        int price;
        int no_of_copies;

    public:
        LibraryResource(string s, string a, int p)
        {
            title=s;
            author=a;
            price=p;
            no_of_copies=1;

        }


        void set_no_of_copies(int n)
        {
            no_of_copies=n;
        }
        int getCopies()
        {
            return no_of_copies;
        }


        virtual void resourceDetails()
        {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "No of copies: " << getCopies() << endl;
        }





};

class Book : public LibraryResource
{
    private:
        CoverType covertype;
    public:
        Book(string s, string a, int p, CoverType cover): LibraryResource(s,a,p),covertype(cover){}

        void resourceDetails()
        {
            LibraryResource::resourceDetails();
            if (covertype == 0)
            {
                cout << "Cover Type: Hardcover" << endl;
            }
            else

                cout << "Cover Type: Paperback" << endl;

        }


};

class EBook: public LibraryResource
{
    private:
        double filesize;
    public:
        EBook(string s, string a, int p, double file): LibraryResource(s,a,p),filesize(file){}

        void resourceDetails()
        {
            LibraryResource::resourceDetails();
            cout << "File size in MB: " << filesize << endl;




        }


};

class Audiobook: public LibraryResource
{
    private:
        double time;
    public:
        Audiobook(string s, string a, int p, double t): LibraryResource(s,a,p),time(t){}

        void resourceDetails()
        {
            LibraryResource::resourceDetails();
            cout << "Time in minutes: " << time << endl;


        }
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

    /** TASK 2: Display details */
    for (int i = 0; i < 3; i++)
    {
        resource_list[i]->resourceDetails();
    }

    /** TASK 3: Setting ISBN for Book */
    resource_list[0]->set_no_of_copies(50);
    resource_list[1]->set_no_of_copies(5);
    resource_list[2]->set_no_of_copies(1);

    for (int i = 0; i < 3; i++)
    {
        resource_list[i]->resourceDetails();
    }

    return 0;
}
