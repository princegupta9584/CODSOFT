#include<iostream>
#include<vector>
using namespace std;

void displayBoard(const vector<char>&board){
    cout<<"\n";
    for(int i= 0; i<9;i++){
        cout<<" "<<board[i]<<" ";
        if((i+1)%3==0){
            cout<<"\n";
            if(i<6)cout<<"---+---+---\n";
        }
        else{
            cout<<"|";

        }
    }
    cout<<"\n";
}

bool checkWin(const vector<char>&board,char player){
    const int winCombos[8][3]={
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };
    for(const auto& combo : winCombos){
        if(board[combo[0]]==player &&
        board[combo[1]]==player &&
        board[combo[2]]==player){
            return true;
        }
    }
    return false;
}

bool checkDraw(const vector <char>&board)
{
    for (char cell : board){
        if(cell != 'X' && cell != '0'){
            return false;
        }
    }
    return true;
}

void playGame(){
    vector<char>board(9);
    for(int i= 0; i<9;i++)board[i]='1'+i;

    char currentPlayer = 'X';
    bool gameRunning = true;

    while (gameRunning){
        displayBoard(board);

        int move;
        cout<<"Player"<<currentPlayer<<",enter your move(1-9):";
        cin>>move;
        if(move<1||move>9||board[move-1]=='X'||board[move-1]=='0'){
            cout<<"Invalid move! Try again \n";
            continue;
        }

        board[move -1] = currentPlayer;

        if(checkWin(board, currentPlayer)){
            displayBoard(board);
            cout<<"Player"<<currentPlayer<<"wins!\n";
            gameRunning=false;
        }
        else if(checkDraw(board)){
            displayBoard(board);
            cout<<"Its a draw!\n";
            gameRunning=false;
        }
        else{
            currentPlayer=(currentPlayer=='X')? '0' : 'X';
        }
    }
    char playAgain;
    cout<<"Do you want to play again?(y\n):";
    cin>> playAgain;
    if(playAgain=='y'||playAgain=='Y'){
        playGame();
    }
    else{
        cout<<"Thanks for playing!\n";
    }
}

int main(){
    cout<<"welcome to Tic - Tac -Toe!\n";
    playGame();
    return 0;
}