#include <iostream>
#include "unordered_map"
int main() {
    std::unordered_map<std::string,std::string> translations{
            {"apple","苹果"},{"banana","香蕉"},{"book","书"}
    };
    //std::cout<<"apple的中文是"<<translations.at("apple");
    for(auto val=translations.cbegin();val!=translations.cend();val++)
    {
        std::cout<<val->first<<"的中文是"<<val->second<<std::endl;
    }
}
