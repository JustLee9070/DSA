#include <iostream>
#include <algorithm>

using namespace std;

void pattern13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + (n - i - 1); j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;

            if (j < (2 * i + 1) / 2)
            {
                ch++;
            }

            else
            {
                ch--;
            }
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

void patternA(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        if (i < n - 1)
        {
            cout << endl;
        }

        else
        {
            break;
        }
    }
}

void patternV(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * (n - 1) - 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern19(int n)
{
    patternA(n);
    patternV(n + 1);
}

void pattern20(int n)
{
    patternV(n + 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * i + 2; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern21(int n)
{
    if (n == 1)
    {
        cout << "*";
    }

    else if (n == 2)
    {
        cout << "**" << endl
             << "**";
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*";
            for (int j = 0; j < n - 2; j++)
            {
                if (i == 0 || i == n - 1)
                {
                    cout << "*";
                }

                else
                {
                    cout << " ";
                }
            }
            cout << "*" << endl;
        }
    }
}

void pattern22(int n){
    for (int i = 1; i <= 2*n - 1; i++)
    {
        for (int j = 1; j <= 2*n - 1; j++)
        {
            int i1 = i - 1;
            int i2 = 2*n - 1 - i;
            int j1 = j - 1;
            int j2 = 2*n - 1 -j;

            int mindist = min({i1, i2, j1, j2});

            cout<<n - mindist;

        }

        cout<<endl;
        
    }
    


}

int main()
    {
        pattern22(1);
    }