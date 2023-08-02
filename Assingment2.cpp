#include <bits/stdc++.h>
    using namespace std;

       string reverseString(const string& str) 
{
       string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) 
{
       reversedStr += str[i];
    }
    return reversedStr;
}

    int main() {
       string inputStr;
       cout << "Enter a string: ";
       getline(std::cin, inputStr);

       string reversedStr = reverseString(inputStr);

       cout << "Reversed string: " << reversedStr << endl;


}
