#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v , int temp){
    
    // base case
    if( v.size()==0  ||  v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
       
    int val = v[v.size()-1];
    v.pop_back();
    insert(v , temp);
    v.push_back(val);
    return;
}

void sort(vector<int> &v){

    // base case
    if(v.size() == 1)
        return;

    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v , temp);
    return;
}


int main(){

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);

    sort(v);

    cout<<"sorted array"<<endl;
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

    return 0;
}