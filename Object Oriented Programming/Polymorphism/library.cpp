#include <iostream>



class Material {
public:
    virtual void index() = 0; // Pure virtual function
};

class Book : public Material {
public:
    void index() override {
        std::cout << "Indexing book" << std::endl;
    }
};

class Magazine : public Material {
public:
    void index() override {
        std::cout << "Indexing magazine" << std::endl;
    }
};

class Journal : public Material {
public:
    void index() override {
        std::cout << "Indexing journal" << std::endl;
    }
};

int main() {
    Material* materials[] = {new Book(), new Magazine(), new Journal()};
    
    for (int i = 0; i<3; ++i) {
        materials[i]->index();
    }
    
    
    
    return 0;
}



