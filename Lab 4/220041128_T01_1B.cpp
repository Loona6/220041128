#include<iostream>

using namespace std;

class Calc
{
    private:
        
        int res;

        int get() const
        {
            return res;
        }

        int set(int x)
        {
            res=x;
        }

    public:
        Calc() : res(0) {}

        ~Calc() 
        {
            display();
            cout << "Destructor of the Calculator object is called." << endl;
        }

        void add(int value)
        {
            res = get();
            res += value;
        }

        void subtract(int value)
        {

            res -= value;
        }

        void multiply(int value)
        {
            res = res * value;
        }

        void divideBy(int value)
        {
            if(value!=0)
                res = res / value;
            else
                cout<<"Invalid Arithmatic Operation!"<<endl;
        }
        void clear()
        {
            set(0);
        }
        void display()
        {
            cout << "Calculator Display: " << res << endl;
        }
};

int main()
{
    Calc c;
    c.add(10);
    c.display();
    c.add(7);
    c.display();
    c.multiply(31);
    c.display();
    c.subtract(42);
    //c.display();
  
    
}