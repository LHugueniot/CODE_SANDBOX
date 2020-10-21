#include <iostream>
#include <bitset>

int main(int argc, char const *argv[])
{

	int32_t INPUT = 0b00000000000000000000000000000010;
	int N = 1;

	std::cout<<"INPUT: "<<std::bitset<sizeof(int32_t)>(INPUT)<<" Get "<<N<<": "<<std::bitset<sizeof(int32_t)>((INPUT >> N) & 1)<<std::endl;
	std::cout<<"INPUT: "<<std::bitset<sizeof(int32_t)>(INPUT)<<" Set to 1: "<<std::bitset<sizeof(int32_t)>(INPUT |= 1 << N)<<std::endl;
	std::cout<<"INPUT: "<<std::bitset<sizeof(int32_t)>(INPUT)<<" Set to 0: "<<std::bitset<sizeof(int32_t)>(INPUT &= ~(1 << N))<<std::endl;
	std::cout<<"INPUT: "<<std::bitset<sizeof(int32_t)>(INPUT)<<" Toggle: "<<std::bitset<sizeof(int32_t)>(INPUT ^= 1 << 1)<<std::endl;

	return 0;
}