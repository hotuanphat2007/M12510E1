#include <iostream> 
#include <fstream>
#include <stdexcept>
using namespace std; 

int main () {
    ifstream file;

    try {
        file.open("example.txt");
        if (!file.is_open()) {
            throw runtime_error("File could not be opened!");
        }
        string line;
        int lineCount =0;
        cout << "Reading file contents: \n";

        while (getline(file,line)) {
            cout << line << endl;
            lineCount++;
        }
        cout <<"\nTotal lines: " << lineCount << endl;
        file.close();
    }   catch (const runtime_error& e) {
        cerr << "Exception caught: "  << e.what() << endl;
    }
    return 0;
}