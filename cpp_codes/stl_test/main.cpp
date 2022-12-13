#include <iostream>
#include <map>
#include <utility>
using namespace std;
int main() {
    map<string,string> map1{{"1","一"},{"2","二"}};
    map1.insert(make_pair("3","三"));
    map1.emplace(make_pair("4","四"));
    map1.erase("2");
    for(auto it=map1.cbegin();it!=map1.cend();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
}
