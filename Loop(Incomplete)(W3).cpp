/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Jerome Reaux Jr.

#include <iostream>
#include <string>
using namespace std;
//Int(Interger) is the reason why the code allows and any given number to pass through it
// Lines 9-11 are when the number is being used line 12 is suppose to repeat the answer it was given
int main() {
  std::cout<< "Input Number" << std::endl;
  int InputNumber;
  std::cin >> InputNumber;
  std::cout << "The number of assignments you've failed is: " << InputNumber << std::endl;
  
//Char(Character) is the reason that the user is able to a Letter
// Lines 18-20 are when the character is being used line 21 is suppose to repeat the answer it was given
 
std::cout<< "Input Letter" << std::endl;
  char InputLetter;
  std::cin >> InputLetter;
  std::cout << "Do better! The grade you got on your failed assignment(s) was: " << InputLetter << std::endl;
  // Using a string to replicate whatever answer the user puts
  // Lines 24-26 are when the string is being used line 27 is suppose to repeat the answer it was given
  std::cout<< "Quiz Answer" << std::endl;
  string QuizAnswer;
  std::cin >> QuizAnswer;
  std::cout << "Your Answer was: " << QuizAnswer << std::endl;
  cout<<"Since your answer was somewhat close you'll get partial credit, but you still failed."<<endl;
  // First score without any changes
    int score = 11;
  cout << "Your quiz score:" << score << endl; 
  //Changing the score
  score = score + 5;
  cout << "The teacher felt bad about your score so raised by 5, now you score is:\n" << score << endl;
  //Combing with assigned operater
  score += 60;
    cout<< "After Being yelled at by your parents the teacher rose the score again:\n" <<score <<endl;
  cout<<"Congratulation You Passes!!!"<<endl;
  
      char again = 'y';
        while (again == 'y') {
        
            cout << "\n You did pass but....";
            cout << "\n we both know you can do better";
            cout << "\n Try again :)";
            cout << "\n Please (y/n):";
                cin >> again ;
            
        }
            cout << "\n Stay weak then";
            
        
    return 0;
  }

