#include <bits/stdc++.h>
using namespace std;

void printa(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> NearestGreaterToRight(vector<int> &arr)
{
    stack<int> st;
    vector<int> ans;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (st.empty())
        {
            ans.push_back(-1);
        }
        else if (st.top() > arr[i])
        {
            ans.push_back(st.top());
        }
        else
        {
            while (!st.empty())
            {
                if (st.top() <= arr[i])
                    st.pop();
                else if (st.top() > arr[i])
                {
                    ans.push_back(st.top());
                    break;
                }
            }
            if (st.empty())
                ans.push_back(-1);
        }
        st.push(arr[i]);
    }

    int s = 0;
    int e = ans.size() - 1;
    while (s < e)
    {
        swap(ans[s], ans[e]);
        s++;
        e--;
    }

    return ans;
}

vector<int> NearestGreaterToLeft(vector<int> &arr)
{
    stack<int> st;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (st.empty())
            ans.push_back(-1);
        else if (st.top() > arr[i])
            ans.push_back(st.top());
        else
        {
            while (!st.empty())
            {
                if (st.top() <= arr[i])
                    st.pop();
                else if (st.top() > arr[i])
                {
                    ans.push_back(st.top());
                    break;
                }
            }
            if (st.top())
                ans.push_back(-1);
        }
        st.push(arr[i]);
    }
}

vector<int> stockSpan(vector<int> &arr)
{
    vector<int> ans;
    stack<pair<int, int>> st;

    for (int i = 0; i < arr.size(); i++)
    {
        if (st.empty())
            ans.push_back(-1);
        else if (st.top().first >= arr[i])
            ans.push_back(st.top().second);
        else
        {
            while (!st.empty())
            {
                if (st.top().first < arr[i])
                    st.pop();
                else
                {
                    ans.push_back(st.top().second);
                    break;
                }
            }
            if (st.empty())
                ans.push_back(-1);
        }
        pair<int, int> p = {arr[i], i};
        st.push(p);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = i - ans[i];
    }
    return ans;
}

vector<int> leftSmallest(vector<int> &heights)
{
    vector<int> left;
    stack<pair<int, int>> st;

    for (int i = 0; i < heights.size(); i++)
    {
        if (st.empty())
            left.push_back(-1);
        else if (st.top().first < heights[i])
            left.push_back(st.top().second);
        else
        {
            while (!st.empty())
            {
                if (st.top().first >= heights[i])
                    st.pop();
                else
                {
                    left.push_back(st.top().second);
                    break;
                }
            }
            if (st.empty())
                left.push_back(-1);
        }
        st.push({heights[i], i});
    }

    return left;
}

vector<int> rightSmallest(vector<int> &heights)
{
    vector<int> right;
    stack<pair<int, int>> st;

    for (int i = heights.size() - 1; i >= 0; i--)
    {
        if (st.empty())
            right.push_back(heights.size());
        else if (st.top().first < heights[i])
            right.push_back(st.top().second);
        else
        {
            while (!st.empty())
            {
                if (st.top().first >= heights[i])
                    st.pop();
                else
                {
                    right.push_back(st.top().second);
                    break;
                }
            }
            if (st.empty())
                right.push_back(heights.size());
        }
        st.push({heights[i], i});
    }

    int s = 0, e = right.size() - 1;
    while (s < e)
    {
        swap(right[s], right[e]);
        s++;
        e--;
    }

    return right;
}

vector<int> leftSmallest(vector<int> &heights)
{
    vector<int> left;
    stack<pair<int, int>> st;

    for (int i = 0; i < heights.size(); i++)
    {
        if (st.empty())
            left.push_back(-1);
        else if (st.top().first < heights[i])
            left.push_back(st.top().second);
        else
        {
            while (!st.empty())
            {
                if (st.top().first >= heights[i])
                    st.pop();
                else
                {
                    left.push_back(st.top().second);
                    break;
                }
            }
            if (st.empty())
                left.push_back(-1);
        }
        st.push({heights[i], i});
    }

    return left;
}

vector<int> rightSmallest(vector<int> &heights)
{
    vector<int> right;
    stack<pair<int, int>> st;

    for (int i = heights.size() - 1; i >= 0; i--)
    {
        if (st.empty())
            right.push_back(heights.size());
        else if (st.top().first < heights[i])
            right.push_back(st.top().second);
        else
        {
            while (!st.empty())
            {
                if (st.top().first >= heights[i])
                    st.pop();
                else
                {
                    right.push_back(st.top().second);
                    break;
                }
            }
            if (st.empty())
                right.push_back(heights.size());
        }
        st.push({heights[i], i});
    }

    int s = 0, e = right.size() - 1;
    while (s < e)
    {
        swap(right[s], right[e]);
        s++;
        e--;
    }

    return right;
}

int largestRectangleArea(vector<int> &heights)
{
    vector<int> left = leftSmallest(heights);
    vector<int> right = rightSmallest(heights);

    int maxArea = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int height = heights[i];
        int width = right[i] - left[i] - 1;

        int area = height * width;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main()
{

    vector<int> a = {2, 1, 5, 6, 2, 3};
    vector<int> left = leftSmallest(a);
    vector<int> right = rightSmallest(a);
    printa(a);
    printa(left);
    printa(right);

    int maxArea = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int height = a[i];
        int width = right[i] - left[i] - 1;

        int area = height * width;
        maxArea = max(maxArea, area);
    }

    cout << maxArea << endl;
    return 0;
}