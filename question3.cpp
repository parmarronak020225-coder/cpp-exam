#include <iostream>
using namespace std;

class Animal
 {
public:
    virtual void makeSound() = 0; 
    virtual void move() = 0;     
};

class Lion : public Animal 
{
public:
    void makeSound() 
    {
        cout << "Lion: Roar!" << endl;
    }

    void move() 
    {
        cout << "Lion moves by running on land." << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound()
     {
        cout << "Fish: (No sound, just bubbles)" << endl;
    }

    void move() 
    {
        cout << "Fish moves by swimming in water." << endl;
    }
};

int main()
 {
    Animal* animals[2];

    animals[0] = new Lion();
    animals[1] = new Fish();

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
        animals[i]->move();
        cout << endl;
    }
    
    delete animals[0];
    delete animals[1];

    return 0;
}
