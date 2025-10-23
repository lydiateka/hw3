#include "stack.h"
#include <iostream>
using namespace std;

int main() { 
    Stack<int> s; 
    s.push(1);
    s.push(2);
    s.push(3); 

    cout << "Empty? " << s.empty() << endl; 
    cout << "Size: " << s.size() << endl; 
    
    while(!s.empty()) { 
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; 

    Stack<int> q; 
    q.pop(); 

}