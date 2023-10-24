//Jerome Reaux Jr.
//4-11-23
// Assignment - C++ Pointers
// Source: Chapter 6: Goodswap from reference assignment


#include <iostream>
#include <string>
#include <unistd.h>



using namespace std;

// The numbers  that the pointer will reciece will be swapped
void Goodswap(int* num1, int* num2)
// swap formula
{
    int numS = *num1;
    *num1 = *num2;
    *num2 = numS;
}

// my variables

int num1;
int num2;
string name;
char hon;

int main() {
    //ask users name
    cout << "Today we're gonna play a guessing game, I'm thinking of a number\n";
    cout << "If you can guess a higher number than what I'm thinking, you win\n";
    cout << "Easy and simple\n";
    cout << "what is your name?\n";
    cin >> name;
    
    //player a game with user
    cout <<"\n\n Nice to meet you " << name; cout <<"!";
    cout << "\nPlease pick a number between 1 - 999\n";
     cin >> num1;
     
    // The user is never suppose to win the game
  
  // statement if user says higher than 500
  if (num1 > 500) {
    std::cout << "\nI'm sorry but the number I was thinking about is 2000"; cout << std::endl;
    num2 = 2000;
  }
  
      // the statement if the user say a number lower than 500
  else {
    std::cout << "\nUnfornately I win, the number is thinking was 520";cout  << std::endl;
    num2 = 520;
  }
  
  sleep (5);
  
  // Ai reads back the final results
  cout << "\n\nFinal Results;\n";
  cout << "Your guesses was " << num1; cout <<"\n";
  cout << "The number was " << num2; cout << "\n";
sleep (5);
    
    
    //AI mocks user(This is all a joke)
    cout << "\n\nHAHA, funny that you thought you could win\n";
    cout << "I've never lost\n and I never will\n";
    cout << "Loser ;)\n";
 
   
// The 2 numbers get swapped making the AI the losing side
// using pointers and references
    int* viva = &num1;
    int* vivo = &num2;

// Ai reads final results again the numbers are swapped
    Goodswap(viva, vivo);
cout << "\n\nRemember the final results were;\n";
    cout << "Your guess: " << num1; cout << "\n";
    cout << " The number I was thinking: " << num2 << endl;

sleep (7);

// Ai realized the numbers are swapped
cout << "\nHuh? This can't be right, they're switched\n";
cout << "No way, you cheated and swapped answers\n";

// Ai comfronts user on why the score was switched
// user picks the ending

cout << "\nBe honest, did you cheat?(y/n)";
cin >> hon;
if (hon == 'y')
{
    cout << "Ha! I knew I could never lose!\n";
    cout << "However, I am thankful for your honesty.\n";
    sleep (3);
    cout << "\nYou're a good person " << name; cout << "!\n";
}
else {
    cout << "This doesn't make sense.\n";
    cout << "Earlier in the code,I swear these answers were swapped\n";
    sleep (3);
    cout << "I'm a smart enough computer to admit I've lost\n";
    cout << "Farewell " << name; cout << ".";
}

    return 0;
}
