#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. INITIALIZATION :
    // vector<int> v; // Type 1
    // vector<int> v(5); // Type 2
    // vector<int> v(10, -1); // Type 3
    int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v(a, a + 2); // Type 4
    // vector<int> v2(v); // Type 5
    vector<int> v = {1, 2, 3, 4, 5}; // Type 6

    // 2. CAPACITY FUNCTIONS :
    // v.size();    // To know the size O(1)
    // v.clear();   // To clear the vector O(N)
    // v.empty();   // To know empty or not O(1)
    // v.resize(5); // To resize the vector O(K): Where K is difference between new and current size

    // 3. MODIFIERS :
    // v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // = sign is used for assigning the values O(N) or O(1)
    // v.push_back(11);                     // To add an element to the end O(1)
    // v.pop_back();                        // To remove the last element
    // v.insert(v.begin() + 3, {100, 200}); // To insert values at specific position O(N+K)
    // v.erase(v.begin() + 3);              // To delete elements from specific part O(N+K)
    // replace(v.begin(), v.end(), 5, 100); // To replace specific value O(N)
    // auto it = find(v.begin(), v.end(), 3); // To find specific value O(N)

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}