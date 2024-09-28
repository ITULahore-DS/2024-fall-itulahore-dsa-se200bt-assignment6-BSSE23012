#include <iostream>
using namespace std;
#include "functions.h"
#include "functions.cpp"

int main(){

  int option;

  while(true)
  {
    cout << "[1] EMPTY STACK CHECK\n";
    cout << "[2] STACK PUSH\n";
    cout << "[3] STACK POP\n";
    cout << "[4] STACK PEEK\n";
    cout << "[5] STACK SIZE\n";
    cout << "[6] CLEAR STACK\n";
    cout << "[7] POP EMPTY STACK\n";
    cout << "[8] PEEK EMPTY STACK\n";
    cout << "[9] EXIT\n";

    cin >> option;

    if (option == 1) {
      Stack myStack;
      myStack.printStack();

    } 
    else if (option == 2) {
      Stack myStack;

      myStack.push(10);
      myStack.push(20);
      myStack.push(30);

      myStack.printStack();

    } 
    else if (option == 3) {
      Stack myStack;

      myStack.push(10);
      myStack.push(20);
      myStack.push(30);

      myStack.pop();
      myStack.printStack();

      myStack.pop();
      myStack.printStack();

      myStack.pop();
      myStack.printStack();  // Stack should be empty

    } 
    else if (option == 4) {
      Stack myStack;

      myStack.push(10);
      cout << "TOP : " << myStack.peek() << endl;

      myStack.push(20);
      cout << "TOP : " << myStack.peek() << endl;

      myStack.printStack();

    } 
    else if (option == 5) {
      Stack myStack;

      myStack.push(10);
      myStack.push(20);
      myStack.push(30);
      cout << "SIZE : " << myStack.size() << endl;

      myStack.pop();
      cout << "SIZE : " << myStack.size() << endl;

      myStack.printStack();

    } 
    else if (option == 6) {
      Stack myStack;

      myStack.push(10);
      myStack.push(20);
      myStack.push(30);

      myStack.printStack();

      myStack.clear();
      myStack.printStack();

    } 
    else if (option == 7) {
      Stack myStack;
      
      myStack.pop();  
      myStack.printStack();

    } 
    else if (option == 8) {
      Stack myStack;
      
      cout << "PEEK EMPTY TOP : " << myStack.peek() << endl;

    } 
    else if (option == 9)
      break;
  }

  return 0;
}