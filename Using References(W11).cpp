//Jerome Reaux Jr.
// 3-26-2023
//Using References to hack and Bankrupting the terrorists


#include <iostream>
#include <string>
// Allows me to add in the sleep function that pauses the code
#include <unistd.h>

using namespace std;
// My variables
string CIAname;
char UTD;
char YGA;
char Ready;
char LA;
char passcode;
//badSwap isn't used in my code just a place holder
 void badSwap (int x, int y);
 //Used in my code to show that the money in "accounts" can be swapped
    void goodSwap (int& x, int& y);
    
int main()
{
    cout << "Guess you're the new hire from the CIA, I'm Agent Carter, What is your name?\n";
    cin >> CIAname;
    
     cout << "Agent Carter - Ahhh Agent " << CIAname; cout << " we heard you were pretty skilled in these types of cases\n";
     // pauses the code
     sleep (2);
      cout << "\n\nWell I'm glad you're on out side, are you all caught with the current case? (y/n)\n";
 cin >> UTD;
 // if the user chooses to help the story is different
    //Player Decisons, if 
if ( UTD == 'y')
{
    // The user is caught up with case the code will move forward
   
    cout << "\n\nAgent " <<CIAname; cout << " - 'Yes I know our current problems lets move forward'\n";
    // code sleeps for 3 seconds
    sleep (3);
    cout << "Agent Carter - Good to know you live up to your reputation!\n Our balence is coming up soon,lets check together\n\n";
    sleep (2);
        // The users first time checking the Original balences
        
     int  Langley = 1500;
    int JoeCoffeeShop = 200000;  
        
       cout << "First Check:\n";
     cout << " Langley's current balence is: " <<  Langley<< "\n";
     cout << " Joe's Coffee Shop current balence is: $" << JoeCoffeeShop << "\n\n";
     
sleep (5);
cout << "Good! We check every week!\n";
}
else 
{
    //The outcome if the user says no
    
    cout << "Agent carter - I'll give a quick rundown\n";
    
    // pauses code for 5 seconds
    sleep (5);
    
    cout << "As you know our division deals with hackers and watches bank accounts\n";
    cout << "We got anonymous tip that a coffee shop might get cyber attacked by another coffee shop\n";
    cout << "We narrowed it down between two and we are current watching, Joe's Coffee Shop and Langley's\n\n";
    sleep (15);
    // The users first time checking the Original balences
    
     int  Langley = 1500;
    int  JoeCoffeeShop = 200000;
    
       cout << "First Check: \n";
    cout << " Langley's current balence is: $" <<  Langley<< "\n";
     cout << " Joe's Coffee Shop current balence is: $" << JoeCoffeeShop << "\n\n";
 sleep (5) ;   
 cout << "Good! We check every week!\n";
}
cout << "*2nd week on the job*\n\n";
cout << "Agent Carter - Hello Agent, Ready to check the balence again? (y/n)";
// A useless answer that doesn't go anywhere, small talk to move the story along
cin >> Ready;
cout << "Agent Carter - Regardless if your answer was yes or no, would have to check anyway\n it's our job\n";
sleep(3);
int  Langley = 1500;
    int  JoeCoffeeShop = 200000;
  
       // balence is swapped
       cout << "Second Balence Check in: \n";
       goodSwap(Langley,JoeCoffeeShop);
        cout << " Langley's current balence is: $" <<  Langley<< "\n";
     cout << " Joe's Coffee Shop current balence is: $" << JoeCoffeeShop << "\n\n";
     sleep (8);
     cout << "Agent Carter - Huh, that's weird someone swapped the account balences and locked us out\n";
     sleep (3);
     cout << "*Just then the computer interface gets hacked and shadow figure pops on the screen*\n";
     cout << "Shadow - 'You've finally found out, the money now belongs to Langley's\n";
     cout << "oh? I didn't realize I would be going against the wonder agent " << CIAname;
     cout << "\n\n Would you a to play a game " << CIAname; cout << "(y/n):";
     // useless answer just a pause if the user needs before the code continues
     cin >> YGA;
     
     // The user will answer a riddle to get the money back or losing it forever
     cout << "Shadow - It's funny if thought you had a choice\n";
     cout << "Shadow - I'll tell you what if you can answer this riddle I'll give the money back and turn myself in\n";
     cout << "If you get it wrong the money stays Langley's and no charges will held against them\n";
     
     sleep (10);
     cout << "Do you accept? (y/n)\n";
     cin >> LA;
     // The lazy ending
     if (LA == 'y')
{
 cout << "That's the spirit\n";
 cout << "Here's the question: \n\n";
  cout << "How does one start equlity, and ends with one? He who tell the ends had to first begin,\n as one approaches it's final tide,\n you would find at the end of time\n";
cout << "WHAT AM I?\n";
cin >> passcode;
    
}
// if user was lazy
else {
    cout << "Shadow - You lazy Agent\n";
    cout << "Guess you would really let me get away\n";
    cout << "Life isn't that easy, you are going to answer the question regardless\n\n";
    
    cout << "How does one start equlity, and ends with one? He who tell the ends had to first begin,\n as one approaches it's final tide,\n you would find at the end of time\n";
cout << "WHAT AM I?\n";
cin >> passcode;
}    


// two ending if the user gets the riddle right or wrong
// if statement to if the user gets it right
if (passcode == 'e')
{
    //good ending
  cout << " Wow you actually figured it out\n You've impressed me\n";
  cout << "As promised\n";
 sleep (10);
  cout << "The funds return to normal \n";
     goodSwap (Langley,JoeCoffeeShop);
     
      cout << " Langley's current balence is: $" <<  Langley<< "\n";
     cout << " Joe's Coffee Shop current balence is: $" << JoeCoffeeShop << "\n\n";
     cout << "I'll be at the station shortly, don't keep me waiting\n";
}
else{
    // bad ending
    cout << "I'm sorry but that's the answer\n";
    cout << "The answer was 'e' but don't feel sad, Langley has the funds they need\n";
    cout << " This is I depart, till next time Agent " <<CIAname;
    cout << "*end transmittion*";
    sleep (5);
}

    return 0;
}



  
// The numbers are staying the same as the Original
 void badSwap (int x, int y)
 {
     int temp = x; 
     x = y;
     y = temp;
     
 }
     // The numbers are being switched
     void goodSwap (int& x, int& y)
     {
         int temp = x;
         x = y;
         y = temp;
     }
     
     