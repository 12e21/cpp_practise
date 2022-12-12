#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v2(10,8);
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i*i);
    }
    v1.swap(v2);
    for(auto val=v1.cbegin();val<v1.cend();val++)
    {
        cout<<*val<<" ";
    }
    cout<<endl;
}
