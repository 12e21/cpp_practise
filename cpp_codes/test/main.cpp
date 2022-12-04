#include <iostream>
template<typename type>
type sum(type num_1,type num_2)
{
    return (num_1+num_2);
}
template<class Box_class>
class Bigbox
{
private:
    Box_class my_box;

};
int main() {
    int a=1,b=2;
    int result=sum<int>(a,b);
    std::cout<<result<<std::endl;
    float c=3.14,e=2.78;
    float result_2=sum<float>(c,e);
    std::cout<<result_2<<std::endl;
    Bigbox<int> my_box;

}

