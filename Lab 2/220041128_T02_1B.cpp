#include <iostream>
#include <string>
using namespace std;

class Temperature
{
private:
    double value;
    string unit;


public:


    bool isValidUnit(const string &u)
    {
        return (u == "Celsius" || u == "Fahrenheit" || u == "Kelvin");
    }

    bool isValid(double val, const string &u)
    {
        if (u == "Celsius" && val >= -273.15)
            return true;
        if (u == "Fahrenheit" && val >= -459.67)
            return true;
        if (u == "Kelvin" && val >= 0)
            return true;
            
        return false;
    }
    
    
    void assign(double tempValue, const string &tempUnit)
    {
        if (!isValidUnit(tempUnit))
        {
            cout << "Invalid unit!" << endl;
            return;
        }

        if (!isValid(tempValue, tempUnit))
        {
            cout << "Invalid temperature!" << endl;
            return;
        }

        value = tempValue;
        unit = tempUnit;
    }

    double convert(const string &targetUnit)
    {
        if (!isValidUnit(targetUnit))
        {
            cout << "Invalid unit!" << endl;
            return 0;
        }

        if (unit == targetUnit)
        {
            return value;
        }

        double celsiusValue;

        if (unit == "Celsius")
        {
            celsiusValue = value;
        }
        else if (unit == "Fahrenheit")
        {
            celsiusValue = (value - 32) * 5 / 9;
        }
        else if (unit == "Kelvin")
        {
            celsiusValue = value - 273.15;
        }

        if (targetUnit == "Celsius")
        {
            return celsiusValue;
        }
        else if (targetUnit == "Fahrenheit")
        {
            return celsiusValue * 9 / 5 + 32;
        }
        else if (targetUnit == "Kelvin")
        {
            return celsiusValue + 273.15;
        }
    }

    void print() const
    {
        cout << "The temperature is " << value << " " << unit << "." << endl;
    }
};

int main()
{
    Temperature temp;

    temp.assign(100, "Celsius");
    temp.print();

    cout << "Converted to Fahrenheit: " << temp.convert("Fahrenheit") << endl;
    cout << "Converted to Kelvin: " << temp.convert("Kelvin") << endl;

    temp.assign(-500, "Celsius");
    temp.assign(300, "Kelvin");
    temp.print();

  
    return 0;
}
