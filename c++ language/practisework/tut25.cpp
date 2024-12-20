//lists..............................................................................
#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    for(int val:lst){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;
    list1.push_back(7);
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(1);
    display(list1);

    // list1.sort();
    // display(list1);

    // list1.remove(9);
    // display(list1);

    // list1.pop_front();
    // display(list1);


    list<int>list2;
    list2.push_back(72);
    list2.push_back(22);
    list2.push_back(32);
    list2.push_back(9);
    display(list2);

    list1.merge(list2);
    display(list1);

    return 0;
};