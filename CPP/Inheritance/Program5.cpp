#include<iostream> 

class Parent { 
	
	int x = 10;
	int y = 20;

	public:
		Parent(int x = 0, int y = 0) {
			std::cout<<"Parent Constructor para" << std::endl;
			this->x = x;
			this->y = y;
		}
		void getData() {

			std::cout<< x <<"\n"<< y <<std::endl;
		}
};

class Child : public Parent {
	int z = 30;

	public:
		Child(int x , int y, int z) {
			std::cout<< "Child Constructor" <<std::endl;
		}
		void printData() {

			std::cout<< z <<std::endl;
		}
};
int main() {
	Child obj(40,50,60);

	obj.getData();
	obj.printData();
	return 0;
}
