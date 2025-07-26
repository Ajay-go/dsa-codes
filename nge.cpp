#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> nextGreaterElements(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        st.push(nums[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = nums[i];

        while (!st.empty() && st.top() <= curr)
            st.pop();
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(curr);
    }
    return ans;
}
    int main()
    {

        return 0;
    }
