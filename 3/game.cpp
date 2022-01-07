#include <iostream>
#include <cstdlib>
using namespace std;

// go fuck yourself for decompiling my rigged rock paper scissors game!

void game(){
    int r = 1;
    int p = 2;
    int s = 3;
    int pScore;
    int cScore;
    int choice;

    while(true){
        cout << "Current Score:" <<endl;
        cout << "Computer: " << cScore <<endl;
        cout << "Player: " << pScore <<endl;
        cout << "Rock=1 , Paper= 2, and Scissors= 3\n" << endl;
        cout << "Make your choice.\n1\n2\n3" << endl;
        cin >> choice;

        int cChoice = rand()%3+1;

        if(choice == 1){

            if(cChoice == 1){
            cout << "Both parties drew selected rock, the game is a draw." << endl;
            cout << "Press ENTER to continue";
            cin.ignore();
            system("clear");
            }

        else if(cChoice == 2){
            cout << "Computer chose Paper, you lose";
            cScore++;
            cout << "Press ENTER to continue";
            cin.ignore();
            system("clear");
        }

        else if(cChoice == 3){
            cout << "Computer chose Scissors, you win";
            pScore++;
            cout << "Press ENTER to continue";
            cin.ignore();
            system("clear");
        }
        }

        if(choice==2){

            if(cChoice == 2){
                cout << "Both parties drew Paper, the game is a draw." << endl;
                cout << "Press ENTER to continue";
                cin.ignore();
                system("clear");
            }

            else if(cChoice == 3){
                cout << "Computer chose Scissors, you lose." << endl;
                cScore++;
                cout << "Press ENTER to continue";
                cin.ignore();
                system("clear");
            }

            else if(cChoice == 1){
                cout << "Computer chose Rock, you win." << endl;
                pScore++;
                cout << "Press ENTER to continue";
                cin.ignore();
                system("clear");
            }
        }

        if(choice==3){

            if(cChoice==3){
                cout << "Both parties drew Scissors, the game is a draw." << endl;
                cout << "Press ENTER to continue";
                cin.ignore();
                system("clear");
            }

            else if(cChoice==2){
                cout << "Computer chose Paper, you win";
                pScore++;
                cout << "Press ENTER to continue";
                cin.ignore();
                system("clear");
            }

            else if(cChoice==1){
                cout << "Computer chose Rock, you lose";
                cScore++;
                cout << "Press ENTER to continue";
                cin.ignore();
                system("clear");
            }
        }
    }
}


int main(){
    game();
}