#include <iostream>
#include <set>
#include <utility>
using namespace std;
int main() {
    multiset<string> multiset1={"book","book","apple","pencil","pen","gpt"};
    multiset1.erase("book");
    for(auto val=multiset1.cbegin();val!=multiset1.cend();val++)
    {
        cout<<*val<<endl;
    }
}
