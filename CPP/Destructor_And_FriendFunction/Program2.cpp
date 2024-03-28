#include<iostream>

class Demo {

	public:
		int x = 10;
		Demo() {
			std::cout<< "No Args" << std::endl;
		}
		void getData() const{
			std::cout<< x << std::endl;
		}
			
};
int main() {

	const Demo obj;	 //if we dont want to change the instance variable by object then make object constant
	obj.getData();
	return 0;
}
