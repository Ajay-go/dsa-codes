#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int s, int m, int e)
{
    vector<int> temp;
    int i = s;
    int j = m + 1;

    while (i <= m && j <= e)
    {
        if (v[i] <= v[j])
        {
            temp.push_back(v[i]);
            i++;
        }
        else
        {
            temp.push_back(v[j]);
            j++;
        }
    }
    while (i <= m)
    {
        temp.push_back(v[i]);
        i++;
    }
    while (j <= e)
    {
        temp.push_back(v[j]);
        j++;
    }

    // copy sorted elements back
    for (int k = s; k <= e; k++)
    {
        v[k] = temp[k - s];
    }
}

void mergesort(vector<int> &v, int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    
    mergesort(v, s, mid);
    mergesort(v, mid + 1, e);

    merge(v, s, mid, e);
}

int main()
{
    vector<int> v = {-1, 0, 9, 4, 3, 2, 7};
    cout << "Original array: ";
    for (int ele : v)
        cout << ele << " ";
    cout << endl;

    mergesort(v, 0, v.size() - 1);

    cout << "Sorted array: ";
    for (int ele : v)
        cout << ele << " ";
    cout << endl;

    return 0;
}

/*
Time Complexity:
---------------
- Best Case:  O(n log n)
- Average:    O(n log n)
- Worst Case: O(n log n)

Space Complexity:
-----------------
- O(n) extra space (for temporary array).

Properties:
-----------
- Stable Sorting Algorithm
- Divide & Conquer Technique
- Not In-place (requires extra memory)
*/
