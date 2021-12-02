#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include<cstdlib>
using namespace std;
int main() {
  time_t seconds;
  srand(seconds);
  bool check = true;
  int u1;
  int u2;
  int u3;
  bool carryOn = true;
  int playerToken = 10;
  while(playerToken > 0){
    playerToken = playerToken -1;
    int n1 = rand() % 10 + 1;// random number between 1 and 3
    int n2 = rand() % 10 + 1;
    int n3 = rand() % 10 + 1;
    int streak = 0;
    do {
      cout << "Whats your first number?" << endl;
      cin >> u1;
      check = true;
      if (cin.fail()) {
        check = false;
        cout << "invalid input" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please re-enter your first number, make sure its an integer!" << endl;
        }
      if (check == true){
        if (u1 < 11){
          carryOn = false;
        }
      }
    }
    while (carryOn == true);
    carryOn = true;
    do{
      cout << "Whats your second number?" << endl;
      cin >> u2;
      check = true;
      if (cin.fail()) {
        check = false;
        cout << "invalid input" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please re-enter your second number, make sure its an integer!" << endl;
        }
      if (check == true){
        if (u2 < 11){
          carryOn = false;
        }
      }
    }
    while (carryOn == true);
    carryOn = true;
    do{
      cout << "Whats your third number?" << endl;
      cin >> u3;
      check = true;
      if (cin.fail()) {
        check = false;
        cout << "invalid input" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please re-enter your second number, make sure its an integer!" << endl;
        cin >> u3;
        }
      if (check == true){
        if (u3 < 11){
          carryOn = false;
        }
      }
    }
    while (carryOn == true);
    cout << n1 << " "<< n2 << " " << n3 << endl;
    if (n1 == u1 && n2 == u2 && n3 == u3){// if all 3 numbers match get 2 tokens
      playerToken = playerToken + 2;
    }else if((n1 == u1 && n2 == u2) ||(n2 == u2 && n3 == u3) || (n1 == u1 && n3 == u3)){// if two match get 1 token
      playerToken = playerToken + 1;
    }
    cout << "You have " << playerToken << " tokens left."  << endl;
  }
  cout << "You have ran out of tokens :( better luck next time!" << endl;
} 