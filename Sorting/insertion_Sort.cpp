#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    for (int i = 1; i < n; i++)
    {
        int elment = a[i];
        int j = j - 1;
        while (elment <= a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
    }
}