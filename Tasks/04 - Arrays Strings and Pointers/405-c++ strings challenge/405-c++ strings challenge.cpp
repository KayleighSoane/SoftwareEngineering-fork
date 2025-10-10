#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    size_t locstart = input.find("42"); //finds beginning of 42
    size_t locend = 2;
    string value = input.substr(locstart, locend); //pulls out 42
    cout << "Numerical Value in string \"input\" is: " << value << endl;



    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    static int count = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == "the" || word == "The") {
            count++;
        }
    }
    cout << "The word 'the' appears " << count << " times." << endl;
    


	// Challenge 3a - Reverse an array
	int challengearray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int reversearray[10];
	for (int i = 0; i < 10; i++) {
		reversearray[i] = challengearray[9 - i];
		cout << reversearray[i] << " ";
	}

    cout << endl; 
      
    int twoarray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // Challenge 3b - In-place reversal
    int n = sizeof(twoarray) / sizeof(twoarray[0]);
    for (int i = 0; i < n / 2; i++) {
        int temp = twoarray[i];
        twoarray[i] = twoarray[n - 1 - i];
        twoarray[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << twoarray[i] << " ";
    }
    cout << endl;

    return 0;
}

