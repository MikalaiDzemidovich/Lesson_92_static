
#include <iostream>
#include <string>

class Apple{
	private:
		int weight;
		std::string color;
		int id;

	public:
		static int count;
		Apple(int weight, std::string color){
		this->weight = weight;
		this->color = color;
		count++;
		this->id = count;
		std::cout<<id<<std::endl;
		std::cout<<weight<<std::endl;
		std::cout<<color<<std::endl;
	}
	~Apple(){}
};
int Apple::count = 0;

int main(){
	Apple app1(12,"Red");
	Apple app2(43,"Green");
	Apple app3(23,"Green");
	return 0;
}
