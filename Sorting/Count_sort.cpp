#include <iostream>
#include <vector>
#include <algorithm>
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
    // time comlexity (O^2)
    int max_size = *max_element(a.begin(), a.end());
    vector<int> freq(max_size + 1);

    // get frequency for all elments
    for (auto i : a)
    {
        freq[i]++;
    }
    for (int i = 0; i <= max_size; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            cout << i << " ";
        }
    }
}