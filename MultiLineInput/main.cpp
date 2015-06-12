#include <fstream>
#include <iostream>
using namespace std;

int main() {
    
    string word1, word2, word3, word4;
    
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("Input.txt");
    outFile.open("Output.txt");
    
    /*
    cout << "Enter word 1 " << endl;
    cin >> word1;
    cout << "Enter word 2 " << endl;
    cin >> word2;
    cout << "Enter word 3 " << endl;
    cin >> word3;
    cout << "Enter word 4 " << endl;
    cin >> word4;
    */
    
    while (!inFile.eof()) {
        inFile >> word1 >> word2 >> word3 >> word4;
        cout << word1 << " " << word2 << " " << word3 << " " << word4 << endl;
        outFile << word1 << " " << word2 << " " << word3 << " " << word4 << endl;
    }
    
    
    
    
    return 0;
}
