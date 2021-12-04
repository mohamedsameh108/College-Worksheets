#include <iostream>
#include <limits>
using namespace std;
int main()
{
    float firstNum, secondNum;
    int start;
    char oper;
    cout << "Please , Enter first number\n";
    cin >> firstNum;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error , Please Re-Enter the Number" << endl;
            cin >> firstNum;
        }
        if (!cin.fail())
        {
            break;
        }
    }
    cout << "Please , Enter second number\n";
    cin >> secondNum;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error , Please Re-Enter the Number" << endl;
            cin >> secondNum;
        }
        if (!cin.fail())
        {
            break;
        }
    }
    cout << "Please , Enter the Operation\n+\n-\n/\n*\n";
    cin >> oper;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error , Please Re-Enter the Operation" << endl;
            cin >> oper;
        }
        if (!cin.fail())
        {
            break;
        }
    }
    switch (oper)
    {
    case '+':
        cout << "Addition is = " << firstNum + secondNum << endl;
        break;
    case '-':
        cout << "difference is = " << firstNum - secondNum << endl;
        break;
    case '/':
        cout << "Division is = " << firstNum / secondNum << endl;
        break;
    case '*':
        cout << "multiplication is = " << firstNum * secondNum << endl;
        break;

    default:
        cout << "Error , can't handle this Operation" << endl;
        break;
    }
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