#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        multiset<long long> cn;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            cn.insert(a);
        }
        long long candy_count = 0;
        for (int i = 0; i < k; i++)
        {   
            auto it = (--cn.end()) ;
            candy_count +=(*it);
            cn.erase(it);
            cn.insert((*it)/2);
        }
        cout << candy_count << endl;
    }
    
    return 0;
}