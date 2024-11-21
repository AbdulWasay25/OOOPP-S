#include <iostream>
#include <string>
using namespace std;
class Animal{
    private:
    string name;
    int age;
public:
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
	    void setName(const string& newName) {
        name = newName;
    }
    void setAge(int newAge) {
        age = newAge;
    }
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << " years" << endl;
    }
};
class Mammal : public Animal {
public:
    void feedBaby() const {
        cout << "Feeding baby mammal." << endl;
    }
};
class Bird : public Animal {
public:
    void layEgg() const {
        cout << "Laying an egg." << endl;
    }
};
class Reptile : public Animal {
public:
    void shedSkin() const {
        cout << "Shedding skin." << endl;
    }
};
int main() {
    Mammal mammal;
    Bird bird;
    Reptile reptile;
    mammal.setName("Cats");
    mammal.setAge(5);
    bird.setName("Parrot");
    bird.setAge(2);
    reptile.setName("Snake");
    reptile.setAge(3);
    cout << "Mammal :" << endl;
    mammal.displayInfo();
    mammal.feedBaby();
    cout << "\nBird :" << endl;
    bird.displayInfo();
    bird.layEgg();
    cout << "\nReptile :" << endl;
    reptile.displayInfo();
    reptile.shedSkin();

    return 0;
}
