#include <iostream>
class Demo {

	public:
	int x=10;
	Demo() {

		std::cout<< "In Constructor" << std::endl;
		std::cout<< x << std::endl;
	}

	Demo(int x) {
		this->x = x;
		std::cout<< "In Constructor para" << std::endl;
		std::cout<< x << std::endl;
		Demo();		//Temporory object is created 
	}
	void getData() {
		
		std::cout<< x << std::endl;

	}	
	~Demo() {

		std::cout<< "Destructor" << std::endl;
	}
};

int main() {

	const Demo obj(50);
	std::cout<< "End Main" << std::endl;

	//obj.getData();
	
	//obj.x = 50 ;
	//obj.getData();
	return 0;
}
