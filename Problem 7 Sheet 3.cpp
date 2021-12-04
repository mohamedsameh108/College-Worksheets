#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int maxNum , initNum = 0 , lastNum = 1;
    cout << "Please , Enter Max number of iterations\n";
    cin >> maxNum;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error , Please Re-Enter the Number" << endl;
            cin >> maxNum;
        }
        if (!cin.fail())
        {
            break;
        }
    }
    for (int i = 0 ; i<=maxNum ; i++)
    {
        cout << initNum << " , ";
        int newNum = initNum + lastNum;
        initNum = lastNum;
        lastNum = newNum;
    }
}