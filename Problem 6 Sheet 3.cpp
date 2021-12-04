# include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Character \t \t ASCII Code" << endl;
    for(char c : alphabet)
    {
        cout << "\t" << c << " \t \t \t" << int(c) << endl;
        cout << "\t" << (char) tolower(c) << " \t \t \t" << int(tolower(c)) << endl;
    }
}