#include <string>
#include <ctime>
#include <iostream>

#define PRINT_TIME  0x01 // 0b00000001
#define PRINT_DATE  0x02 // 0b00000010
#define PRINT_USER  0x04 // 0b00000100

static const char * USER = {"Lucien"};

void print(const char * msg, std::uint8_t options = 0){

	time_t now = time(0);
	tm *ltm = localtime(&now);

	if(options & PRINT_DATE)
		std::cout<<"Date: "<<ltm->tm_mday<<"/"<<1 + ltm->tm_mon<<"/"<<1900 + ltm->tm_year<<std::endl;
	if(options & PRINT_TIME)
		std::cout<<"Time: "<< 1 + ltm->tm_hour<<":"<<1 + ltm->tm_min<<":"<<1 + ltm->tm_sec<<std::endl;
	if(options & PRINT_USER)
		std::cout<<USER<<std::endl;
	std::cout<<msg<<std::endl;
}

int main() {
	for(int i = 0; i< 256; i++ )
		std::cout<<__builtin_popcount(i)<<std::endl;
	print("Hello world", PRINT_TIME | PRINT_USER);
}