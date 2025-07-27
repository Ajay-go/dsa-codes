#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> asteroidCollision(vector<int> &asteroids)
{
    vector<int> ans;
    stack<int> st;
    int n = asteroids.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = asteroids[i];

        if (!st.empty())
        {
            bool pos_top = (st.top() > 0) ? true : false;
            bool pos_curr = (curr > 0) ? true : false;

            if (!pos_top && pos_curr)
            {
                while (!st.empty() && st.top() < 0 && abs(st.top()) < curr)
                {
                    st.pop();
                }
                if (!st.empty() && st.top() < 0 && abs(st.top()) == curr)
                    st.pop();
                else if (!st.empty() && st.top() < 0 && abs(st.top()) > curr)
                    continue;
                else
                    st.push(curr);
            }
            else
                st.push(curr);
        }
        else
            st.push(curr);
    }
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main()
{

    return 0;
}