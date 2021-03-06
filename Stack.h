//*********************************************************************
// FILE:        Stack.h
// AUTHOR:      Samuel Piecz
// LOGON ID:    Z1732715
// DUE DATE:    10/31/17
//
// PURPOSE:     Declaration for the Stack class. ADTs 4 life. 
//********************************************************************
#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <ostream>

using namespace std;

class Stack
{
    // Friend functions
    friend ostream& operator<<(ostream& lhs, const Stack& rhs); 

    // Data members
    private:
        int* stackArray;
        size_t stackCapacity;
        size_t stackSize;
    // Methods
    public:
        Stack();
        Stack(const Stack& other);
        ~Stack();
        Stack& operator=(const Stack& other);
        size_t size() const;
        size_t capacity() const;
        bool empty() const;
        int top() const;
        void clear();
        void push(int val);
        void pop();
        void reserve(size_t n);
        int operator[](size_t n) const;
        int& operator[](size_t n);
        bool operator==(const Stack& rhs) const;
}; 

#endif
