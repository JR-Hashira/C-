
//Jerome Reaux Jr
//Feb 21,2023
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


bool loop = true;
using namespace std;

int main()
{
    //My variables
    string TeacherGuess;
    int RoomGuess;
    int i = 0;
    do {
    
    // Teacher Genarated Randomization
    srand(time(0));
    int randomNum = rand();
    //List of UAT Professors in an array
    const string UATPros[10] = {"Jeremy_Bruce", "David_Brokaw", "Steven_Cofrancesco","Tony_Hinton","Kendra_Kim", "Adam_Moore", "Mark_Smith", "Aaron_Rodiguez", "Rawad_Habib", "Rae_Crusoe" };

//Professors assigned to a room

    for(int i = 0; i <= 9; i++)
    {
        //Printing out Professors names 
		std::cout << UATPros[i] << "\n";
	}
{
    string UATRooms[20] = {"101",  "102",  "103",  "104",  "105",  "106",  "107",  "108",  "109",  "110",  "111",  "112",  "113",  "114",  "115", "116",  "117",  "118",  "119","120"};  
 for (int i = 0; i < 20; i++)
  {
      // Print out room numbers
		std::cout << UATRooms[i] << "\n";
	}
    //Random number of 20 for the UATRooms
    int Room = randomNum % 20;
    
    UATRooms[Room] = UATPros[i];
    
    
// All the text and i/o

// Asking for a professor guess
cout << "\nType out the name of the Professor you want to find\n";
cin >> TeacherGuess;

//Room number guess
cout << "\n Guess the room number that Professor is in!\n";
cin >> RoomGuess;

//Player Feedback part
if (TeacherGuess == UATRooms[RoomGuess -1])
{
    cout << "Congratulations, You found the teacher you were looking for!!!\n";
}

//if the guess was wrong
else
{
   cout << "Oddly you found a different Teacher, Keep searching though, you'll find them eventually!\n";

}

//loop
cout << "Wanna keep guessing?(y/n)\n";
string playAgain;
cin >> playAgain;

if(playAgain == "y")
{
    loop = true;
}

else {
    loop = false;
}

}
} while (loop == true);
cout<< "Take care and find more teachers another time :)" << " ";

return 0;
    }