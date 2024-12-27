#include <iostream>

using namespace std;

// �⺻ Ŭ����: Animal
class Animal {
public:
    
    virtual void makeSound() = 0;
};

// �Ļ� Ŭ����: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog : Woof! Woof!" << endl;
    }
};

// �Ļ� Ŭ����: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat : Meow! Meow!" << endl;
    }
};

// �Ļ� Ŭ����: Cow
class Cow : public Animal {
public:
    void makeSound() {
        cout << "Cow : Moooow! Mooow!" << endl;
    }
};

int main() {
    // Animal Ÿ�� �����ͷ� �پ��� ��ü�� ����Ŵ
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