#include <iostream>
#include <string>

int main(int argc, char const *argv[]){

    std::string lower("abcdefghijklmnopqrstuvwxyz");
    std::string upper("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    std::string digits("0123456789");

    for(auto & val : lower)
    	std::cout<<val<<": "<<int(val)<<std::endl;
    for(auto & val : upper)
    	std::cout<<val<<": "<<int(val)<<std::endl;
    for(auto & val : digits)
    	std::cout<<val<<": "<<int(val)<<std::endl;
	return 0;
}