#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;
int main() {
    try {
        string filename;
        cout << "Enter file name: ";
        getline(cin >> ws, filename);
        ifstream fin(filename);
        if (!fin.is_open())
            throw runtime_error("File cannot be opened!");
        string line;
        int lineCount = 0;
        while (getline(fin, line)) {
            lineCount++;
        }
        cout << "File opened successfully.\n";
        cout << "Number of lines: " << lineCount << "\n";
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
    }
return 0;
}