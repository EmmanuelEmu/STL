#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<int> st;
    st.push(12);
    st.push(15);
    st.push(18);
    st.push(21);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}