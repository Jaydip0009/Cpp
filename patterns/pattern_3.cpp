#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n * n; i++)
    {
        cout << " " << i;
        if (i % 5 == 0)
        {
            cout << endl;
        }
    }
}