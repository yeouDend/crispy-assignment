#include <iostream>

using namespace std;

// 기본 클래스: Animal
class Animal {
public:
    
    virtual void makeSound() = 0;
};

// 파생 클래스: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog : Woof! Woof!" << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat : Meow! Meow!" << endl;
    }
};

// 파생 클래스: Cow
class Cow : public Animal {
public:
    void makeSound() {
        cout << "Cow : Moooow! Mooow!" << endl;
    }
};

int main() {
    // Animal 타입 포인터로 다양한 객체를 가리킴
    Animal* animals[3];
    Dog myDog;
    Cat myCat;
    Cow myCow;

    animals[0] = &myDog;
    animals[1] = &myCat;
    animals[2] = &myCow;

    for (int i = 0; i < 3; i++)
    {
        animals[i]->makeSound();
    }
    
    return 0;
}