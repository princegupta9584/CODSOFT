#include<iostream>
using namespace std;

void showMenu(){
    cout<<"Select an operation to perform :\n";
    cout<<"1. Addition(+)\n";
    cout<<"2. Subtraction(-)\n";
    cout<<"1. Multiplication(*)\n";
    cout<<"1. Division(/)\n";
    cout<<"Enter your Choice(1-4):\n";
}

int main(){
    double num1, num2, result;
    int choice;

    cout<<"Welcome to the Calculator\n";

    cout<<"Enter the first number\n";
    cin>> num1;
    cout<<"Enter the second number\n";
    cin>> num2;

    showMenu();
    cin>>choice;

    switch(choice){
        case 1:
        result=num1 +num2;
        cout<<"Result"<<num1<<"+"<<num2<<"=\n"<<result;
        break;

        case 2:
        result = num1 - num2;
        cout<<"Result"<<num1<<"-"<<num2<<"=\n"<<result;
        break;

        case 3:
        result=num1*num2;
        cout<<"Result"<<num1<<"*"<<num2<<"=\n"<<result;
        break;

        case 4:
        if(num2 != 0){
            result=num1/num2;
            cout<<"Result"<<num1<<"/"<<num2<<"=\n"<<result;
        }
        else{
            cout<<"Error: Division by zero is not allowed !\n";
        }
        break;
        default:
        cout<<"Invalid choice! Please select a valid operation\n";
    }
    return 0;
}