// DS_DogClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Dog
{
public:
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getBreed()
    {
        return breed;
    }

    void setName(string dogName)
    {
        name = dogName;
    }

    void setAge(int dogAge)
    {
        age = dogAge;
    }

    void setBreed(string dogBreed)
    {
        breed = dogBreed;
    }

    void bark()
    {
        cout << "Woof! Woof!";
    }

private:
    string name{ "Duncan" }, breed{ "Golden Retriever" };
    int age{ 2 };
};

int main()
{
    Dog perfectDog;
    int tempAge;
    cout << "Name: " << perfectDog.getName() << endl;
    cout << "Age: " << perfectDog.getAge() << endl;
    cout << "Breed: " << perfectDog.getBreed() << endl << endl;
    cout << "How old/young would you like to make " << perfectDog.getName() << "?" << endl;
    cin >> tempAge;
    perfectDog.setAge(tempAge);
    cout << perfectDog.getName() << " is now " << perfectDog.getAge() << " year(s) old!";
}
