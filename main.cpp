#include <iostream>
using namespace std;

class student {
private :
	int mark;
	string name;
public:
	student(string n ,int m) {
		name = n;
		mark = m;
	}
	void display() {

		cout << "student Name is:" << name << endl;
		cout << "student mark is:" << mark << endl;
	}
	student() {
		cout << "Enter student Name :"<< endl;
		cin >> name;
		cout << "Enter student mark:"<< endl;
		cin >> mark;
	}
	void check_marks(student ob1, student ob2, student ob3) {
		if (ob1.mark > ob2.mark && ob3.mark) {
			cout << "best student is :" << ob1.name << endl;
			cout << "and have the mark :" << ob1.mark << endl;
		}
		else if (ob2.mark > ob1.mark && ob3.mark) {
			cout << "best student is :" << ob2.name << endl;
			cout << "and have the mark :" << ob2.mark << endl;

		}
		else if (ob3.mark > ob1.mark && ob2.mark) {
			cout << "best student is :" << ob3.name << endl;
			cout << "and have the mark :" << ob3.mark << endl;	
		}
		else
			cout << "markes is equal";
	}

	friend void sum(student ob1,student ob2 , student ob3);

};
void sum(student ob1, student ob2, student ob3) {
	int sum = ob1.mark + ob2.mark + ob3.mark;
	cout << "sum of students marks = " << sum;
}


int main() {
	student ob1;
	student ob2;
	student ob3;
	 sum( ob1, ob2, ob3);
	 cout << endl;
	ob1.check_marks( ob1, ob2, ob3);

	return 0;
}
