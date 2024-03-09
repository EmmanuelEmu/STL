#include<bits/stdc++.h>
using namespace std;


int main(){

    multiset<string> student;
    student.insert("Emmanuel");
    student.insert("Mutka");
    student.insert("Emu");
    student.insert("Emmanuel");
    student.insert("Jony");

    auto it = student.find("Emmanuel");
    student.erase(it);
    for (auto it = student.begin(); it != student.end(); it++)
    {
        cout << (*it) << endl;
    }
    
    return 0;
}