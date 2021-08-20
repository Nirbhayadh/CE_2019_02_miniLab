#include <iostream>
#include <string>
#include "ArrayStack.h"
#include "PostToPre.h"
#include <typeinfo>
using namespace std;


int main(){
    string postfix, prefix;
    cout<<"Insert Postfix Expression:- ";
    getline(cin,postfix);

    prefix=PostfixToPrefix(postfix);
    cout<<"Postfix:- "<<postfix<<endl;
    cout<<"prefix:-  "<<prefix<<endl;
}