#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n * n; i++)
    {

        if (i <= n || i >= n * (n - 1))
        {
            cout<<" "<< i;
        }
        else
        {
            if (i % n == 1 || i % n == 0)
            {
                cout <<" "<< i;
            }
            else
            {
                cout <<"  ";
            }
        }
        if (i % n == 0)
        {
            cout << endl;
        }
    }
}