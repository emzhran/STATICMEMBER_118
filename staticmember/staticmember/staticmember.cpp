#include<iostream>
#include<string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout <<"ID	=	" << id << endl;
	cout << "Nama	=	" << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Emzhran");
	mahasiswa mhs2("Giant Pra");
	mahasiswa mhs3("Daffa Put");
	mahasiswa mhs4("Ichsan Sleman");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	return 0;
}