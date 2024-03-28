//Access Specifiers in Inheritance
#include<iostream> 
class Parent {
	int x = 10;

	protected:
	int y = 20;

	public:
		int z = 30;
	
		Parent() {

		}
		void getData() {
			
			std::cout<< y << z << std::endl;
		}
		Parent(int x, int y, int z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}
};

class Child : public Parent {
	
	public:
		Child(int x,int y, int z) {
			Parent(x,y,z);
		}
		void getInfo() {
			
			getData();
		}

};
int main() {

	Child obj(40,50,60);
	obj.getInfo();
	obj.getData();

	return 0;
}
