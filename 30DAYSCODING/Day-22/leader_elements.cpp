#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {

        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

       
        if(st.empty()) {
            result[i] = -1;
        } else {
            result[i] = st.top();
        }


        st.push(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    
    vector<int> res = nextGreaterElement(arr);

    cout << "Next Greater Elements: ";
    for(int x : res) {
        cout << x << " ";
    }

    return 0;
}