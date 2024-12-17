#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    srand(time(0));

    int randomNumber = rand()%100+1;
    int userGuess =0;
    cout<<"Welcome to the Number Guessing game \n";
    cout<<"I have chosen a number between 1 and 100. Can you guess what it is?\n";

    while(true){
        cout<<"Enter the guess number\n";
        cin>>userGuess;

        if(userGuess<randomNumber){
            cout<<"Too low! Try again\n";
        }
        else if(userGuess>randomNumber){
        cout<<"Too high! Try again\n";
        }
        else{
            cout<<"Congratulations! you guessed the number.\n";
        }
    }
    return 0;
}