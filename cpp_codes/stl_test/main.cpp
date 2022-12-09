#include <iostream>
#include <list>
using namespace std;
int main() {
    list<float> l{1.2,3.7,3.9};
    list<float>::iterator i;
    for(i=--l.end();i!=(--l.begin());i--)
    {
    cout<<*i<<" ";
    }
}
