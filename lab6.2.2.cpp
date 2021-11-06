//laba6.2.1
#include <iostream>

using namespace std;

void Create(int*& a, int n, int i)
{
    if (i < n)
    {
        a[i] = -50 + rand() % (101);
        cout << a[i] << " ";
        Create(a, n, i + 1);
    }
}

int P(int*& a, int n, int& p, int& number, int i)
{
    if (i < n)
    {
        if ((a[i] % 2 == 0) || (-a[i] % 2 == 0))
        {
            p = a[i];
            number = i;
            return p;
        }
        P(a, n, p, number, i + 1);
    }
}

void R(int*& a, int& p, int n, int& number, int i)
{
    if (i < n)
    {
        if (((p > a[i]) && (a[i] % 2 == 0) ) || ((p > a[i]) && (-a[i] % 2 == 0) ))
        {
            p = a[i];
            number = i;
        }
        R(a, p, n, number, i + 1);
    }
}

void R_(int*& a, int n, int p, int t, int number)
{
        t = a[0];
        a[0] = p;
        a[number] = t;
}

void H(int*& a, int n, int i)
{
    if (i < n)
    {
        cout << a[i] << " ";
        H(a, n, i + 1);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int n;
    int a = -50;
    int t = 0;
    int number = 0;
    int i = 0;

    cout << "n = "; cin >> n;
    int* r = new int[n];

    Create(r, n, i);
    P(r, n, a, number, i);
    R(r, a, n, number, i);
    cout << endl;
    R_(r, n, a, t, number);
    cout << endl;
    H(r, n, i);
    cout << endl;

    return 0;
}