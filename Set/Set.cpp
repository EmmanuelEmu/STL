#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    set <string> st;
    set <string> :: iterator it;
    string a;
    for(int i=1; i<=10; i++)
    {
        cin >> a;
        st.insert(a);
    }
    for (auto value: st){
        cout << value << endl;
    }

    return 0;
}
