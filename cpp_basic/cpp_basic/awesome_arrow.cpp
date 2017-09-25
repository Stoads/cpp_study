#include <vector>
#include <iostream>

using namespace std;

typedef struct fam {
	int to;
	int how_much;
};

class human {
private:
	int number;
	vector<fam>* familiarity;
public:
	human(int _number,vector<fam> &input) {
		familiarity = &input;
		number = _number;
	}
	void print_familiarity(){
		while (!familiarity->empty()){
			cout << number << "famil: " << familiarity->back().how_much<< " to : " << familiarity->back().to << endl;
			familiarity->pop_back();
		}
	}
};

void start_arrows() {
	human* humans[100];
	
	for (int i = 0; i < 5; i++) {
		vector<fam> a;
		for (int j = 0; j < 5; j++) {
			fam tmp;
			tmp.to = j;
			tmp.how_much = i - j;
			a.push_back(tmp);
		}
		humans[i] = new human(i, a);
		humans[i]->print_familiarity();
	}
}