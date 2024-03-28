#include<iostream>

class Parent {

	public:
		Parent() {
			std::cout<< "In Parent Constructor" << std::endl;
		}
		~Parent() {

			std::cout<< "Destructor Parent" <<std::endl;
		}
};
class Child : public Parent {
	public:
		Child() {
			std::cout<< "Constructor Child" <<std::endl;
		}
		~Child() {
			std::cout<< "Destructor Child" <<std::endl;
		}
		friend void* operator new(size_t size) {
			std::cout<< "new Child" << std::endl;
			void *ptr = malloc(size);
			return ptr;
		}
		void operator delete(void* ptr) {
			std::cout<< "Delete Child" << std::endl;
			free(ptr);
		}
};

int main() {

	Child *obj1 = new Child();
	//opeator new(sizeof(Child))
	//obj1 = ptr
	//Child(obj1)
	//Constructor
		//constructor parent
		//constructor child
	delete obj1;
	//destructor
		//destructor child	=======> notify
		//destructor Parent

	//ooperator delete(obj1)
	return 0;
}

