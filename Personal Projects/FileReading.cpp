#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile(Testtext.txt);

    string line;

    while (getine(inputFile, line)) {
        cout << line  << endl;


    }


    inputFile.close()
}