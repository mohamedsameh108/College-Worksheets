#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int numbers[3], maxNum, start;
    for (int i = 0; i < 3; i++)
    {
        cout << "Please Enter Number" << endl;
        cin >> numbers[i];
        while (1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error , Please Re-Enter the Number" << endl;
                cin >> numbers[i];
            }
            if (!cin.fail())
            {
                break;
            }
        }

        if (i == 0)
        {
            maxNum = numbers[0];
        }
        else
        {
            if (numbers[i] > maxNum)
            {
                maxNum = numbers[i];
            }
        }
    }
    cout << "The highest Number is = " << maxNum << endl;
    cout << "Do You want to Start again?\n1-Again\n2-End\n";
    cin >> start;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error , Please try again" << endl;
            cout << "Do You want to Start again?\n1-Again\n2-End\n";
            cin >> start;
        }
        if (!cin.fail())
        {
            if (start == 1)
            {
                main();
                break;
            }
            else if (start == 2)
            {
                exit(0);
                break;
            }
            else
            {
                cin.clear();
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error , Please try again" << endl;
                cout << "Do You want to Start again?\n1-Again\n2-End\n";
                cin >> start;
            }
        }
    }
    return 0;
}