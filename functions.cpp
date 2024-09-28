//
// Created by jammy on 9/28/2024.
//

#include "functions.h"

Node ::Node() {
  next = nullptr;
  data = 0;
}

Node ::~Node() {}

void Node ::setData( int dataValue) {
  data = dataValue;
}

int Node ::getData() {
  return data;
}

void Node ::setNext(Node *nextNode) {
  next = nextNode;
}

Node *Node ::getNext() {
  return next;
}

// Stack Constructor
Stack ::Stack() {
  top = nullptr;
  count = 0;
}

Stack ::~Stack() {

  if( top != nullptr )
  {
    while( top->getNext() != nullptr )
    {
      Node * temp = top;
      top = top->getNext();
      delete temp;
    }

    delete top;
    top = nullptr;
  }

}

// Stack Insertion
void Stack ::push(int data) {

  // empty checker
  if( top == nullptr )
  {
    top = new Node;
    top->setData(data);
  }
  else
  {
    Node * newNode = new Node;
    newNode->setData(data);
    newNode->setNext(top);
    top = newNode;
    newNode = nullptr;
  }
  count +=1;
}

// Stack Deletion
void Stack ::pop() {

  // empty checker
  if( top != nullptr ){
    // single node checker
    if( top->getNext() == nullptr )
    {
      delete top;
      top = nullptr;
    }
    else
    {
      Node * temp = top;
      top = top->getNext();
      delete temp;
    }
    count -= 1;
  }

}

// Empty Check
bool Stack ::isEmpty() {
  return ( count ? 0 : 1 );
}

// Return Size
int Stack ::size() {
  return count;
}

// Return Top
int Stack ::peek() {
  if(isEmpty())
    return -1;
  return top->getData();
}

// Erase Stack
void Stack ::clear() {

  while( top != nullptr){
    Node * temp = top;
    top = top->getNext();
    delete temp;
  }
  count = 0;

}

// Display Stack
void Stack ::printStack() {

  // empty checker
  if(count == 0){
    cout << "!! EMPTY !!" << endl;
    return;
  }

  cout << "TOP  -----  BOTTOM" << endl;
  Node * iterator = top;
  while( iterator != nullptr)
  {
    cout << "[" << iterator->getData() << "]";
    iterator = iterator->getNext();
    if(iterator)
      cout << " - ";
  }

  cout << endl;

}

// Queue Constructor
Queue ::Queue() {
  top = nullptr;
  count = 0;
}

Queue ::~Queue() {

}

// Queue Insertion
void Queue ::enqueue(int data) {
  // empty checker
  if( top == nullptr )
  {
    top = new Node();
    top->setData(data);
  }
  else
  {
    Node * newNode = new Node;
    newNode->setData(data);
    newNode->setNext(top);
    top = newNode;
    newNode = nullptr;
  }
  count +=1;
}

// Queue Deletion
void Queue ::dequeue() {

  // empty checker
  if( top != nullptr ){
    // single node checker
    if( top->getNext() == nullptr )
    {
      delete top;
      top = nullptr;
    }
    else
    {
      Node * iterator = top;
      while( iterator->getNext()->getNext() != nullptr )
      {
        iterator = iterator->getNext();
      }
      delete iterator->getNext();
      iterator->setNext(nullptr);
    }
    count -= 1;
  }

}

// Returm Size
int Queue ::size() {
  return count;
}

// Queue Display
void Queue ::printQueue() {

  // empty checker
  if( size() == 0 ){
    cout << "!! EMPTY !!" << endl;
    return;
  }

  cout << "TOP  -----  BOTTOM" << endl;
  Node * iterator = top;
  while( iterator != nullptr)
  {
    cout << "[" << iterator->getData() << "]";
    iterator = iterator->getNext();
    if(iterator)
      cout << " - ";
  }

  cout << endl;

}

// Empty Check
bool Queue::isEmpty() {
  return ( count ? 0 : 1 );
}
