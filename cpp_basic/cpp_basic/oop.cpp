#include <iostream>

using namespace std;

class simple_oop {
private:
	int private_a;
	int private_b;
	
	void private_var() {
		private_a = 5;
		private_b = 10;
	}

public:
	char private_use_less;
	void public_func() {
		private_var();
	}
	int* array_getter() {
		int* tmp = new int[2];
		tmp[0] = private_a;
		tmp[1] = private_b;
		return tmp;
	}
	simple_oop(int _a, int _b) {
		//Constructor
		private_a = _a;
		private_b = _b;
	}
	simple_oop(int _a, int _b, char _use_less) {
		private_a = _a;
		private_b = _b;
		private_use_less = _use_less;
	}
};

void printer(simple_oop input) {
	int* tmp = input.array_getter();
	for (int i = 0; i < 2; i++)
		cout << tmp[i] << endl;
	cout << "use less char " << input.private_use_less << endl;
}

void oop_start() {
	simple_oop a(1,5), b(100,2,'a');
	printer(a);
	printer(b);
	a.public_func();
	printer(a);
}