
//Destructor 

#include<iostream>

class Demo {
	int *ptrArray = NULL;
	public:
		Demo() {
			ptrArray = new int[50];
			std::cout<< "In Constructor" << std::endl;
		}
		~Demo() {
			delete[] ptrArray;
			std::cout<< "In Destructor" << std::endl;
		}
};
int main() {

	{
		Demo obj1;
	}
/*	Demo *obj2 = new Demo();	//memory allocated in heap and it needs to deallocate it manually to avoid memory leak problem
	std::cout<< "End Main" << std::endl;
	delete obj2;*/
	return 0;
}
