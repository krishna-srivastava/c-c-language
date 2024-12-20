//vectors.......................................................................
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //syntax;
    vector<int> vec={1,2,3,4,5,6};
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    //size();
    cout<<"size = "<<vec.size()<<endl;

    //push_back();
    // vec.push_back(7);
    // vec.push_back(8);
    // for(int val:vec){
    //     cout<<val<<" ";
    // }

    //pop_back();
    // vec.pop_back();
    // for(int val:vec){
    //     cout<<val<<" ";
    // }
    
    return 0;
};