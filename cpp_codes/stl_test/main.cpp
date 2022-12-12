#include <iostream>
#include <utility>
using namespace std;
int main() {
    pair<string,string> pair1("google","www.google.com");
    pair<string,string> pair2("baidu","www.baidu.com");
    pair2.swap(pair1);
    cout<<pair2.first<<":"<<pair2.second;

}
