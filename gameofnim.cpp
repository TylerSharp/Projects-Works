/*
CSC-150 Assignment 3, 3
Tyler Sharp, 9/28/2015
Plays a game where you and the computer take turns taking marbles
*/

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
 
bool deadNum(int);
int compute(int);
const int MAX = 91;
const int MIN = 13;
 
int main() {  
    
    int size;
    int whoseTurn;
    int compTakeOff; 
    int youTakeOff; 
    int mode;
 
    srand(time(0));
 
    whoseTurn = rand() % 2;

    if(whoseTurn == 0)
        cout << "Computer goes first." << endl;
    else
        cout << "You go first." << endl;
        size = MIN + rand() % (MAX-MIN);
        cout << "Initial number of marbles: " << size << endl;
        mode = rand() % 2;
 
    if (mode == 0) {
        
        
        while (size!=1) {
            if (whoseTurn==0) {
                compTakeOff = 1 + rand() % (size / 2);
                size -= compTakeOff;
                cout << "Computer takes off " << compTakeOff << " marbles." << endl;
                cout << "Current number of marbles: " << size << "\n\n";
            }
            else {
                do {   
                    cout << "Enter number of marbles to draw: ";
                    cin >> youTakeOff;
                } while(youTakeOff<=0 || youTakeOff>size/2);
                    size -= youTakeOff;
                    cout << "Current number of marbles: " << size << "\n\n";
            }
            whoseTurn = whoseTurn==0 ? 1 : 0;
        }   
    }
    else {
        while (size!=1) {
            if (whoseTurn==0) {
                if (deadNum(size)) {
                    compTakeOff = 1 + rand() % (size / 2);
                    size -= compTakeOff;
                    cout << "Computer takes off " << compTakeOff;
                    cout << " marbles." << endl;
                    cout << "Current number of marbles: " << size << "\n\n";
                }
                else {
                    compTakeOff = compute(size);
                    size -= compTakeOff;
                    cout << "Computer takes off " << compTakeOff;
                    cout << " marbles." << endl;
                    cout << "Current number of marbles: " << size << "\n\n";
                }
            }
            else {
                do {
                    cout << "Enter number of marbles to draw: ";
                    cin >> youTakeOff;
                } while (youTakeOff <= 0 || youTakeOff > size / 2);
                size -= youTakeOff;
                cout << "Current number of marbles: " << size << "\n\n";
            }
            whoseTurn = whoseTurn==0 ? 1 : 0;
        }
    }
    if (whoseTurn == 1)
        cout << "The computer wins!" << endl;
    else
        cout << "You win!" << endl;
        return 0;
}
 
bool deadNum(int n) {
    int i = -1;
    while((int)pow(2.0,++i) < n)
;
    return ((int)pow(2.0, i)==n+1);
}

int compute(int n) {
    int i = -1;
    while((int)pow(2.0,++i) < n)
;
    i--;
    return n - ((int)pow(2.0, i) - 1);
}