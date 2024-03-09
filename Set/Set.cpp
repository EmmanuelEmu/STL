#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    set <int> st;
    set <int> :: iterator it;
    int a;
    for(int i=1; i<=10; i++)
    {
        cin >> a;
        st.insert(a);
    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
