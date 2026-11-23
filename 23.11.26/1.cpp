#include <iostream>
#include <string>
using namespace std;

string reverse_with_recursion(const string& str, int index) {
    if (index < 0) {
        return "";
    }
    return str[index] + reverse_with_recursion(str, index - 1);
}


int main(){
    string input = "Hello, World!";
    string reversed = reverse_with_recursion(input, input.length() - 1);
    cout << "Original: " << input << endl;
    cout << "Reversed: " << reversed << endl;
    return 0;
}