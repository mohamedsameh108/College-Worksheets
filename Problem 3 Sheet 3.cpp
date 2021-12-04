#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int num, factorial = 1, start;
    cout << "Please , Enter the Number" << endl;
    cin >> num;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error , Please Re-Enter the Number" << endl;
            cin >> num;
        }
        if (!cin.fail())
        {
            break;
        }
    }
    for (int i = num; i > 0; i--)
    {
        cout << i << " * ";
        factorial = factorial * i;
    }
    cout <<" = " << factorial << endl;
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