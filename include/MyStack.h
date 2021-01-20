// Copyright 2021 KarMashanova
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>
#include <string>
#include <cassert>

template<class T>
class MyStack {
 public:
  explicit MyStack(int size);  // Constructor
  ~MyStack();  // Destructor
  MyStack(const MyStack<T>&);  // Copy Constructor
  int getMyStackSize() const;  // get size
  int getTop() const;  // get the number of the current item
  T* getPtr() const;  // get Ptr on steck
  void push(const T&);  // push element
  T pop();  // delete item
  void printStack();
  T isEmpty() const;  // test for emptiness
  T isFull() const;  // test for fullness
  T get() const;  // get top element
 private:
  int size;
  int top;
  T* store; };

// Constructor
template<class T>
MyStack<T>::MyStack(int _size) :
  size(_size), top(0) {
  store = new T[size]; }
// Copy Constructor
template<class T>
MyStack<T>::MyStack(const MyStack <T>& otherStack) :
  size(otherStack.getMyStackSize()) {
  store = new T[size];
  top = otherStack.getTop;
  for (int ix = 0; ix < top; ix++)
  store[ix] = otherStack.getPtr()[ix]; }
// Destructor
template<class T>
MyStack<T>::~MyStack() {
  delete[] store; }
// Get Stack Size
template <class T>
int MyStack<T>::getMyStackSize() const {
  return size; }
// Get Top
template <class T>
int MyStack<T>::getTop() const {
  return top; }
// Get Ptr on steck
template <class T>
T* MyStack<T>::getPtr() const {
  return store; }
// Push item to the Top
template <typename T>
void MyStack<T>::push(const T& value) {
  assert(top < size);
  store[top++] = value; }
// Delete item on steck
template <typename T>
T MyStack<T>::pop() {
  if (top <= 0) return 0;
  else
   return store[--top]; }
// Print steck
template <typename T>
void MyStack<T>::printStack() {
  for (int ix = top - 1; ix >= 0; ix--)
  std::cout << store[ix] << " "; }
// Checking the stack
template <typename T>
T MyStack<T>::isEmpty() const {
  if (top == 0) return 1;
  return 0; }
// Checking the stack for fullness
template <typename T>
T MyStack<T>::isFull() const {
  if (top == size) return 1;
  return 0; }
// Get element at the top of the stack
template <typename T>
T MyStack <T>::get() const {
  if (top <= 0) return 0;
  else  return store[top - 1]; }

#endif  // INCLUDE_MYSTACK_H_
