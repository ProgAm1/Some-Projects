#include <iostream>
using namespace std;

int checkNum(const string &c)
{

    for (int i = 0; i < c.size(); i++)
    {
        if (!isdigit(c[i]))
        {
            cout << "Error: Input should only contain numbers" << endl;
            return -1;
        }
    }
    return 1;
}

int main()
{
    string input;
    cout << "enter your ID: ";
    cin >> input;

    for (int i = 0; i < 3; i++)
    {
        if (checkNum(input) == 1)
        {
            cout << "success!";
            return -1;
        }
        if (i == 2)
        {
            cout << "the System was unlocked" << endl;
            return -1;
        }

        cout << "enter your ID: ";
        cin >> input;
    }
}
