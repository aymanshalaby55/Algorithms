#include <iostream>
#include <vector>
using namespace std;
// 1- insertion sort v2
void insertion_sortV2(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "**" << endl;
        int elment = a[i];
        int j = i;
        while (a[j + 1] < a[j] && j < n - 1)
        {
            swap(a[j + 1], a[j]);
            j++;
        }
    }
}
// count sort for negative values :

void count_sort2(vector<int> &a, int n)
{
    int positave[5001], negative[5001]; //array for both negative and positave value;
    for (auto i : a)
    {
        if (i >= 0)
        {
            positave[i]++;
        }
        else
            negative[abs(i)]++;
    }
    for (int i = 5000; i >= 1; i++) // start from the smallest value which is -5000.
    {
        while (negative[i]-- != 0) // if there is negaive value just print -i.
        {
            cout << -i << " "; 
        }
    }
    for (int i = 0; i <= 5000; i++)
    {
        while (positave[i]-- != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n = 5;
    vector<int> v(5);
    for (auto &i : v)
        cin >> i;
    insertion_sortV2(v, n);
    for (auto i : v)
    {
        cout << i << ' ';
    }
}