#include <iostream>
using namespace std;
class person {
protected:
	string name;
public:
	person(string n = 0) {
		name = n;
	}
	virtual void Print() {
		cout << "\Person object:\n";
		cout << "\t Name: " << name;
	}
};
class student : virtual public person {
protected:
	string degree;
public:
	student(string degree, string name) : person(name){
		this->degree = degree;
	}
	student(string degree = ""){
		this->degree = degree;
	}
	virtual void Print() {
		cout << "\nStudent object:\n";
		cout << "\t Name: " << name;
		cout << "\t Degree: " << degree;
	}
};
class teacher : virtual public person {
protected:
	string rank;
public:
	teacher(string rank, string name): person(name){
		this->rank = rank;
	}
	teacher(string rank = "") {
		this->rank = rank;
	}
	virtual void Print() {
		cout << "\nTacher object:\n";
		cout << "\t Name: " << name;
		cout << "\t Rank: " << rank;
	}
};
class ta : public teacher, student {
	int stipend;
public:
	ta(int stipend, string rank, string name, string degree) : teacher(rank), person(name), student(degree) {
		this->stipend = stipend;
	}
	void Print() {
		cout << "\nTA object:\n";
		cout << "\t Name: " << name;
		cout << "\t Rank: " << rank;
		cout << "\t Degree: " << degree;
		cout << "\t Stipend " << stipend;
	}
};
int main() {
	student s1("BS(CS)", "Talha");
	teacher t1("Professor", "Zarraar");
	ta ta1(1000, "assistant", "ali", "SE");
	cout << "\n\n\n";
	s1.Print();
	t1.Print();
	ta1.Print();
}