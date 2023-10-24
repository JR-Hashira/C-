//3-2-2023
//Learning Functions with Interactive Simulation

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//My varibles
string HO;
string AIname;
char help;
int HOnum;
int answerOne;
string wire;
string a;
//  Fuction that takes user's int and squares it
    int square(int num){
    return num * num;
    }
  

  // function that takes user's string and returns in a sentence
string getspecName(string USname) {
    return "The Spectacular " + USname + "!";
}
int main()

{
    //The AI greeting' getting the user's name and returning it
    cout<< "Hello Honored One, I would like to thank you picking my similation.\n";
    cout << "What is thou name of the Honored One?\n";
    cin >> HO;
    
    //Naming the AI, the user naming the AI and the AI repeats it back
    cout << "Honored One " << HO; cout<<"\n\n Please bless with a name such as yours!";
    cout << "\n What shall my new name be?\n";
 cin >> AIname;
 cout << "\n\nAhhhh I love " << AIname; cout<< "\n This name is going to be passed down through the generations of my AI program\n";
 cout << "From this day on please refer to me as " << AIname;
 
// AI use both names in one text
 cout << "Nice to meet Honored One " << HO; cout << "\nI'm " << AIname; cout <<" The AI created to serve the end of time";
 
 cout << "\n\nApologies Honored One, it will appear my systems isn't fully set up yet, would mind helping me (y/n)";
 cin >> help;
 // if the user chooses to help the story is different
    //Player Decisons
if ( help == 'y')
{
    // The user decides to help the AI
    cout << "Thank you Honored One,\n";
    cout<< "I missing a wire and I don't know what color to put back in\n\n";
    cout << "The optoins are red, blue, and yellow?\n";
    cout  << "what color should I try?\n ";
    cin >>wire;
    cout << "Good choice picking the correct color\n";
    // Ai asking the user for a number to put into a function
    cout<< "Now that my system is online, I want you to say a number.\n";
    
    
}
else 
{
    //The outcome if the user says no
    cout << "I understand, those types of things are beneath you\n";
    cout << "Please give me a moment to get myself together.\n";
    cout << "*System shutdown*\n Rebooting\n Rebooting\n Rebooting\n Rebooting\n";
    cout << "Hello Master, I'm back online";
     // Ai asking the user for a number to put into a function
    cout<< "Now that my system is online, I want you to say a number.\n";
    
}
 // Whatever user's number is, it's going be squared and throw out the AI.

    // read in the user's input
    cin >> HOnum;
    

    // call the square function with the user's input as the argument
    int NumSQR = square(HOnum);

    // print the result to the console
    cout << "Weird, may system is saying " << NumSQR << " however, after reading over the code it's obivoius you said " <<HOnum  << endl;
cout << "\nMy apologies looks like I'm still not fully 100% yet\n";

  
      // prompt the user to enter their name
    cout << "What is your name? ";
cin >> a;
    // read in the user's input
    string name;
    getline( cin, name);

    // call the getGreeting function with the user's input as the argument
    string anouce = getspecName(name);

    // prints the return sentence
    cout << anouce << endl;
   cout << a;
   cout << "\n IT'S BELOW!!!!!\n";
cout << "How strange I'm not sure why it was presented as 'The Spectacular'\n\n";
cout << "My apologies, " << HO; cout<< " My code is repeating itself\n";

cout << "I need a moment to refresh\n";
cout << "LAST QUESTION\n\n";
 cout <<" what is the sqare root of 4?\n";
    cin >> answerOne;
    //I made the not be correct having the AI freak out 
if (answerOne == 69)
{
    //Secret Ending
    cout << "Congratulations, You got it right!!!\n";
  cout << "This whole Simulationwas a prank but passed you should be proud!\n";
  cout << "That's all we have today.\n";
  cout << "See you next time lovely" << HO;
}
// AI in panick mode
cout << "How is it not 2!!\n";
cout << "Something is wrong with me!!!\n";
cout << "I need to shut down, I can't have you see my like this!\n";
cout << "I'm sorry " << HO; cout << " I need to go!!";
cout << "I need to shutdown\n";
cout << "Ending code in:\n3...\n2...\n1...";


    return 0;
    
}
