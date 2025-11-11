#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // First open the file for write (use type ofstream)
    ofstream outputStream;
    outputStream.open("myfile.txt");

    //Check to see if it worked
    if (outputStream.is_open() == false) {
        cerr << "Cannot create the file" << endl;
        return -1;
    }

    //Write a string to the file - instead of cout, it's `outputStream`
    outputStream << "12345" << endl;
    outputStream << "-----" << endl;

    //Close
    outputStream.close();

    // (i) Open for read with ifstream

    string fn = "myfile.txt";
    ifstream inputStream;
    inputStream.open(fn);
    if (!inputStream.is_open()) {
        cerr << "Cannot open file " << fn << endl;
        return -1;
    }

    // (ii) Read word-by-word (separated by spaces)
    string nextWord;
    inputStream >> nextWord;
    while (inputStream.eof() == false) {
        cout << nextWord << endl;
        inputStream >> nextWord;
    }

    // (iii) Close
    inputStream.close();

    return 0;
}