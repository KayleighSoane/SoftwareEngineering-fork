// 09-StringStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;


int main()
{
    //Create two strings.
    string nextWord;

    //Note how a long string can be broken over several lines to aid writing. Note the \ character never features in the string.
    string sentence = "May the force be with you. " \
                      "Always. Ok, maybe that's asking too much. " \
                      "How about 3 days-a-week with time off for birthdays?";

    //Read first word (words are separated by spaces or newlines)
    istringstream iss(sentence);
    int n = 0;
    do {
        n++;
        iss >> nextWord;

        //Was a word actually read?
        if (iss.fail()) {
            //If it failed, we're probably at the end of the stream
            cout << "No word successfully read. Is this the end of stream?" << endl;
        }
        else {
            //We have a valid word - so display it
            cout << nextWord << endl;

            //We can compare C++ strings using the == operator (very convenient!)
            if (nextWord == "Always.") {
                cout << endl;
            }
        }
	} while(!iss.eof());
	cout << "Total Number of Words: " << n << endl;
    
    //Done
    return 0;

}