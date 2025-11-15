#include <iostream>
using namespace std;

class Car 
{
private:
    string model;   
    int year;      
    int speed;     

public:
    void setModel(string m) 
    {
        model = m;
    }

    string getModel()
    {
        return model;
    }

    void setYear(int y) 
    {
        year = y;
    }

    int getYear() 
    {
        return year;
    }

    void setSpeed(int s) 
    {
        speed = s;
    }

    int getSpeed() 
    {
        return speed;
    }
};

int main()
 {
    Car myCar;
    myCar.setModel("Toyota");
    myCar.setYear(2020);
    myCar.setSpeed(120);

    cout << "Car Model : " << myCar.getModel() << endl;
    cout << "Car Year  : " << myCar.getYear() << endl;
    cout << "Car Speed : " << myCar.getSpeed() << " km/h" << endl;

    return 0;
}
