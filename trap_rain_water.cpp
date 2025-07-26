#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int trap(vector<int> &height)
{
    int l = 0;
    int r = height.size() - 1;
    int lmax = height[l];
    int rmax = height[r];

    int water = 0;

    while (l <= r)
    {
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);

        if (lmax >= rmax)
        {
            water += (rmax - height[r]);
            r--;
        }
        else
        {
            water += (lmax - height[l]);
            l++;
        }
    }
    return water;
}
int main()
{

    return 0;
}