#include <iostream>
#include <string>

int main(int argc, char const *argv[]){

    std::string nums(" .+-0123456789");
    for(auto & val : nums)
    	std::cout<<val<<": "<<int(val)<<std::endl;

	return 0;
}