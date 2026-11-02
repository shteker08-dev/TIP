#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string forbidden = "useragreement";
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    char c;
    while (fin.get(c)) {
        char lower = tolower(c);

        if (forbidden.find(lower) == string::npos) {
            fout << c;
        }
    }

} 
