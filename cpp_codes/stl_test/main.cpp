#include <iostream>
#include <array>
using namespace std;
int main() {
    array<double,10> test_array{};
    for(int i=0;i<test_array.size();i++)
    {
        test_array.at(i)=i+1;
    }
    array<double,10>::const_reverse_iterator cr_iter;
    for(cr_iter=test_array.crbegin();cr_iter<test_array.crend();cr_iter++)
    {
        cout<<*cr_iter<<" ";
    }

}
