#include <iostream>
#include <vector>
#include <stdexcept> // For std::out_of_range exception
using namespace std;
template<typename T>



class Stack {
private:
    vector<T> elements;

public:
    void push(T item) {
        elements.push_back(item);
    }

    void pop() {
        if (elements.empty()) {
            throw out_of_range("Stack is empty.");
        }
        elements.pop_back();
    }


    T peek(){
        if (elements.empty()) {
            throw out_of_range("Stack is empty.");
        }
        return elements.back();
    }
    

    bool isEmpty(){
        return elements.empty();
    }
};




int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    cout << "Top: " << intStack.peek() << endl; // Output: Top: 20
    intStack.pop();
    cout << "Top after pop: " << intStack.peek() << endl; // Output: Top after pop: 10

    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    cout << "Top: " << stringStack.peek() << endl; // Output: Top: World
    stringStack.pop();
    cout << "Top after pop: " << stringStack.peek() << endl; // Output: Top after pop: Hello

    return 0;
}


