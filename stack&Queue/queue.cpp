#include<bits/stdc++.h>
using namespace std;


int main(){

    queue<string> st;
    st.push("Emmanuel");
    st.push("Mukta");
    st.push("Jony");
    st.push("Rony");
    while (!st.empty())
    {
        cout << st.front() << "\n";
        st.pop();
    }
    
    return 0;
}