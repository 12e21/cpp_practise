#include <iostream>
#include <array>
using namespace std;
int main() {
array<int,3> test_array {};
array<int,3>::iterator iter;
cout<<"使用迭代器访问"<<endl;
for(iter=test_array.begin();iter<test_array.end();iter++)
{
    cout<<*iter<<" ";
}
cout<<endl;

cout<<"使用.at()赋值"<<endl;
for(int i=0;i<test_array.size();i++)
{
    test_array.at(i)=i+1;
    cout<<test_array.at(i)<<" ";
}
cout<<endl;

cout<<"使用.data()指针访问"<<endl;
int* data_p=nullptr;
data_p=test_array.data();
for(int i=0;i<test_array.size();i++)
{
    cout<<*(data_p+i)<<" ";
}
cout<<endl;

cout<<"修改第一个元素为4"<<endl;
test_array.front()=4;
cout<<"修改最后一个元素为4"<<endl;
test_array.back()=4;

for(auto val=test_array.begin();val<test_array.end();val++)
{
    cout<<*val<<" ";
}
cout<<endl;

cout<<"将所有元素赋值5"<<endl;
test_array.fill(5);

for(auto val=test_array.begin();val<test_array.end();val++)
{
    cout<<*val<<" ";
}
cout<<endl;

array<int,3> copy_array{};
test_array.swap(copy_array);

cout<<"copy_array: ";
for(auto val=copy_array.begin();val<copy_array.end();val++)
{
    cout<<*val<<" ";
}
cout<<endl;






}
