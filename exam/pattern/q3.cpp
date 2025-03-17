#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n = 5;
    for (int i = 1; i <= n * n; i++)
    {
        if (i <= n || i >= n * (n - 1))
        {
            sum += i;
        }
        else
        {
            if (i % n == 1 || i % n == 0)
            {
                sum += i;
            }
        }
    }
    cout << sum;
}