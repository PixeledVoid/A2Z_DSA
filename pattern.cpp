#include <bits/stdc++.h>
using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
void pattern17(int n);
void pattern18(int n);
void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
void pattern22(int n);

int main()
{
    cout << "Enter a Number: ";
    int a;
    cin >> a;
    pattern22(a);
    return 0;
}

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}
void pattern3(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << '\n';
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << '\n';
    }
}
void pattern5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << '\n';
    }
}
void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << '\n';
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (((2 * n - 1) - ((2 * i) + 1)) / 2); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern8(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < ((2 * n + 1) - (2 * i - 1)) / 2; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2 * n - 1) - (2 * i + 1)) / 2; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < ((2 * n + 1) - (2 * i - 1)) / 2; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern11(int n)
{
    int start;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << " " << start << " ";
            start = 1 - start;
        }
        cout << "\n";
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int l = 0; l < 2 * (n - i + 1) - 2; l++)
        {
            cout << " ";
        }
        for (int k = i; k > 0; k--)
        {
            cout << k;
        }
        cout << "\n";
    }
}
void pattern13(int n)
{
    int v = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << v << " ";
            v++;
        }
        cout << "\n";
    }
}
void pattern14(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char c = 65;
        for (int j = 0; j < i; j++)
        {
            cout << c;
            c++;
        }
        cout << "\n";
    }
}
void pattern15(int n)
{
    for (int i = n; i > 0; i--)
    {
        char c = 65;
        for (int j = 0; j < i; j++)
        {
            cout << c;
            c++;
        }
        cout << "\n";
    }
}
void pattern16(int n)
{
    char c = 65;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << c;
        }
        c++;
        cout << "\n";
    }
}
void pattern17(int n)
{
    for (int i = n; i >= 1; i--)
    {
        char c = 65;
        for (int j = 1; j < i; j++)
        {
            cout << "   ";
        }
        for (int k = 1; k <= n - (i - 1); k++)
        {
            cout << " " << c << " ";
            c++;
        }
        c--;
        for (int l = 1; l < n - (i - 1); l++)
        {
            c--;
            cout << " " << c << " ";
        }
        cout << "\n";
    }
}
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 69 - i;
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << '\n';
    }
}
void pattern19(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}
void pattern20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << '\n';
    }
}
void pattern22(int n)
{
    int number, size = 2 * n - 2;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            number = n - min({i, j, size - i, size - j});
            cout << " " << number << " ";
        }
        cout << '\n';
    }
}