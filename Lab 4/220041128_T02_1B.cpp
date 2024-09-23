#include<iostream>

using namespace std;

class Plane
{
    private:
        int f_num;
        char dest[20];
        float distance;
        float maxFuel;

        int CalFuel(float distance)
        {
            if(distance<=1000)
                return 500;
            else if(distance>100 && distance<=2000)
            {
                return 1100;
            }
            else if(distance>2000)
            {
                return 2200;
            }
        }

    public:

        void FeedInfo()
        {
            cin>>f_num;
            cin>>dest;
            cin>>distance>>maxFuel;

        }

        void ShowInfo()
        {
            cout<<"Flight Number: "<<f_num<<endl;
            cout<<"Destination: "<<dest<<endl;
            cout<<"Distance: "<<distance<<endl;
            cout<<"Max Fuel Capacity: "<<maxFuel<<endl;
            int x= CalFuel(distance);
            if(x>maxFuel)
            {
                cout<<"Not Sufficient Fuel Capacity for this flight"<<endl;
            }
            else
            {
                cout<<"Fuel Capacity is fit for this flight distance"<<endl;
            }

           
            

        }

};

int main()
{
    Plane p;

    p.FeedInfo();
    p.ShowInfo();
}