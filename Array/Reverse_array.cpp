#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s =0,e=v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
int main(){

    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    vector<int> ans = reverse(v);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}