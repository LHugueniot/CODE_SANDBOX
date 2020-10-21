#include <string>
#include <iostream>
#include <queue>
#include <array>


int main() {
	// Queue of unused entity IDs
	std::queue<uint> m_availableEntities;
	for(uint i = 0; i<10; ++i){
		m_availableEntities.push(i);
		std::cout<<"front: "<<m_availableEntities.front()<<std::endl;
		std::cout<<"back: "<<m_availableEntities.back()<<std::endl;
	std::cout<<"====="<<std::endl;
	}

	std::cout<<"================================================"<<std::endl;

	for(uint i = 0; i<10; ++i){
		std::cout<<"front: "<<m_availableEntities.front()<<std::endl;
		std::cout<<"back: "<<m_availableEntities.back()<<std::endl;
		std::cout<<"====="<<std::endl;
		m_availableEntities.pop();
	}
}