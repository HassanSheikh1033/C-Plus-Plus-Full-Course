#include <iostream>
#include <stack>

using namespace std;

class MinStack {
  private:
    stack<int> mainStack;
    stack<int> minStack; 

  public:
    MinStack() {}

    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }

    int top() {
        return mainStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack* obj = new MinStack();
    obj->push(5);
    obj->push(2);
    obj->push(8);
    obj->push(1);
    
    cout << "Top element: " << obj->top() << endl;       // Output: 1
    cout << "Minimum element: " << obj->getMin() << endl; // Output: 1
    
    obj->pop();
    cout << "Top element after pop: " << obj->top() << endl; // Output: 8
    cout << "Minimum element after pop: " << obj->getMin() << endl; // Output: 2

    delete obj;
    return 0;
}
