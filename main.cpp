/**************************************************************************
*                COMPUTER SCIENCE PROJECT

MADE BY: Arya Bhushan
         Hiten Vats


****************************************************************************/
#include <fstream>
#include <iostream>

using namespace std;

string phrase;

class Learner {
public:
    void respond(string phrase);    // Used to get, or teach a response
};



void Learner::respond(string phrase){
    fstream memory;
    memory.open("memory/memory.txt", ios::in);    // Open the memory file for input

    // Search through the file until the end is reached
    while( !memory.eof() ){    // While not at end of file
        string identifier;
        getline(memory,identifier);    // Get next phrase

        if(identifier == phrase){    // Is it the phrase we are looking for
            string response;
            getline(memory,response);   // If so, get the response
              cout << "Alep: ";
              cout << response << endl;   // Textually and audibly output the response!
            return;    // Leave the function
        }
    }

    memory.close();    // Looks like we couldn't find the phrase in memory. Close the file!
    memory.open("memory/memory.txt", ios::out | ios::app);    // Now open for output, and append at end of file
    memory << phrase << endl;    // Record initial phrase in memory


    string userResponse;
    cout<< "\nUh-oh! I don't know how to respond to that yet!";
    cout<<"\nPlease enter the ideal response to the query: \""<< phrase<< "\"" << endl;   // Repeat the phrase the user entered;

    getline(cin, userResponse);    // Get the ideal response
    userResponse=userResponse+" "; //to separately create a block of query and response
    memory << userResponse << endl;    // Write the ideal response to memory
    memory.close();    // Close the file!
}


void welcome(/* arguments */) {

cout << ""
"  ________________________________________________\n"
"|    _________________________________________     |\n"
"|   |                                         |    |\n"
"|   |  C:> Welcome_                           |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |                                         |    |\n"
"|   |_________________________________________|    |\n"
"|                                                  |\n"
"|__________________________________________________|\n"
"      |___________________________________|\n"
"                 |             |\n"
"                 |             |\n"
"          -----------------------------\n"
"          -----------------------------\n";


}


main(){
    Learner AI;    // Create a learner object
    welcome();

    	 //The user enters their input, and then the learner will respond.
    
    for(;;){
        cout << "\nYOU: ";    // User prompt
        string phrase;
        getline(cin, phrase);    // Using getline for multi word input, then store in phrase.

        AI.respond(phrase);    // Pass the user input to the learner and see if he can respond
    }
}
