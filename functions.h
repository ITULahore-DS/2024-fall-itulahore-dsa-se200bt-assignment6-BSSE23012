//
// Created by jammy on 9/28/2024.
//

#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23012_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23012_FUNCTIONS_H

#include <iostream>
using namespace std;

class Node{
  int data;
  Node * next;
public:
  Node();
  ~Node();
  void setNext( Node * nextNode );
  Node * getNext();
  void setData( int dataValue );
  int getData();
};

class Stack{
  Node * top;
  int count;
public:
  Stack();
  ~Stack();
  bool isEmpty();
  void push(int data);
  void pop();
  int peek();
  int size();
  void clear();
  void printStack();
};

class Queue{
  Node * top;
  int count;
public:
  Queue();
  ~Queue();
  bool isEmpty();
  void enqueue(int data);
  void dequeue();
  int size();
  void printQueue();
};


#endif // INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23012_FUNCTIONS_H
