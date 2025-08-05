class Solution
{
public:
    int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
    {
        int n = fruits.size();

        for (int i = 0; i < n; i++)
        {
            int basket = baskets[i];
            for (int j = 0; j < n; j++)
            {
                if (fruits[j] <= basket)
                {
                    fruits[j] = 1e9;
                    break;
                }
            }
        }
        int ans = 0;
        for (int ele : fruits)
        {
            if (ele != 1e9)
                ans++;
        }
        return ans;
    }
};
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    
    return 0;
}