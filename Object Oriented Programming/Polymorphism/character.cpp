#include <iostream>


class Character {
public:
    virtual void move() = 0; // Pure virtual function
};



class Knight : public Character {
public:
    void move() override {
        std::cout << "Knight moves" << std::endl;
    }
};


class Wizard : public Character {
public:
    void move() override {
        std::cout << "Wizard moves" << std::endl;
    }
};


class Archer : public Character {
public:
    void move() override {
        std::cout << "Archer moves" << std::endl;
    }
};



int main() {
    
	
	Character* characters[] = {new Knight(), new Wizard(), new Archer()};

    // Using a traditional for loop
    for (int i = 0; i < 3; ++i) {
        characters[i]->move();
    }


    return 0;
}





