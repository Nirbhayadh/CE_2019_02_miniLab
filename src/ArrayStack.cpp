#include <iostream>
#include <string>
#include "ArrayStack.h"
using namespace std;


ArrayStack::ArrayStack(int size){
    array_size=size;
    data=new string[size];
    rear_index = -1;
}

ArrayStack::~ArrayStack(){
    delete [] data;
}


void ArrayStack::push(  string element){
    rear_index++;
    data[rear_index]=element;
}



void ArrayStack::pop(){
    rear_index--;

}



string ArrayStack::top()  {
   
    return data[rear_index];

}