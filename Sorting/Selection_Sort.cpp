#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    // time comlexity for average , best and worest (O^2)
    for (int i = 0; i < n - 1 ; i++)
    {
        int min_elment = a[i];
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if(a[j] < min_elment)
            {
                min_elment = a[j];
                min_index = j;
            }
        }
        swap(a[i] , a[min_index]);
    }

    for(auto i : a)
    {
        cout << i << " ";
    }
}