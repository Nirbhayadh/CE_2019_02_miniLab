#pragma once

#include <iostream>
#include <string>
using namespace std;

 class Stack{
    public:
    virtual ~Stack() {}


    virtual void push(  string element) =0;
    virtual void pop() = 0;
    virtual string top()   = 0;



};


class ArrayStack: public Stack{
    private:
    int array_size;
    string *data;
    int  rear_index;

    public:
    ArrayStack(int size);
    ~ArrayStack();

    void push(string element);
    void pop();
    string top();

};


