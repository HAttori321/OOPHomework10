#include <iostream>
#include <string>
using namespace std;

class Pet 
{
protected:
    string name;

public:
    Pet(const string& petName) : name(petName) {}
    string getName() const 
    {
        return name;
    }
    virtual void printInfo() const
    {
        cout << "Name: " << name << endl;
    }
};
class Dog : public Pet 
{
private:
    string dogBreed;
public:
    Dog(const string& petName, const string& dogBreed) : Pet(petName), dogBreed(dogBreed) {}
    void printInfo() const override
    {
        cout << "Dog" << endl;
        Pet::printInfo();
        cout << "Breed : " << dogBreed << endl;
    }
};

class Cat : public Pet 
{
private:
    string catBreed;
public:
    Cat(const string& petName, const string& catBreed) : Pet(petName), catBreed(catBreed) {}
    void printInfo() const override 
    {
        cout << "Cat" << endl;
        Pet::printInfo();
        cout << "Breed : " << catBreed << endl;
    }
};
class Parrot : public Pet
{
private:
    string parrotBreed;
public:
    Parrot(const string& petName, const string& parrotBreed) : Pet(petName), parrotBreed(parrotBreed) {}
    void printInfo() const override 
    {
        cout << "Parrot" << endl;
        Pet::printInfo();
        cout << "Breed : " << parrotBreed << endl;
    }
};

int main()
{
    Dog myDog("Rex", "Khaski");
    Cat myCat("Myrchik", "British");
    Parrot myParrot("Roma", "Jako");

    cout << "My pets:" << endl;
    myDog.printInfo();
    cout << endl;
    myCat.printInfo();
    cout << endl;
    myParrot.printInfo();
}
//2 dokiny
