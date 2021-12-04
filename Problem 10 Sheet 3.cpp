#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int numbers[10], even = 0, odd = 0, neutral = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Please , Enter Number\n";
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
        if (numbers[i] == 0)
        {
            neutral += 1;
        }
        else if (numbers[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }
    cout << "Zeros = " << neutral << " Even numbers = " << even << " Odd numbers = " << odd << endl;
}