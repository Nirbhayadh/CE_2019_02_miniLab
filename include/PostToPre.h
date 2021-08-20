#include <iostream>
#include <string>
using namespace std;


bool isOperand(char c){
    if ( (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
        return true;
    }
    else{
        return false;
    }
}

string PostfixToPrefix(string postfix){
    ArrayStack s(postfix.length());
    for(int i=0;i<postfix.length();i++){
        //jumps to next iteration incase of space(' ')
        if(postfix[i]==' '){
            continue;
        }
        // executes if postfix[i] is an operand
        if (isOperand(postfix[i]))   {
            int j=i;
            string final;
            while(isOperand(postfix[i])) { 
                i++; // finding the no. of digits for each operand
            }
            i--;
            for(int k=j;k<=i;k++){
                string op(1,postfix[k]); //conversion of char into string
                final=final+op; //making single element for operand with more thant 1 digit                         
            }
            s.push(final);
        }
        //executes if postfix[i] is an operator
        else{
            string space=" ";
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push(postfix[i] + space + op2 + space + op1);
        }
    }
return s.top();
}