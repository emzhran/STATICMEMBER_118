#include<iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(int); //Constructor
	~angka();	//Desturctor
	void cetakData();
	void isiData();
};
//definisi member function
angka::angka(int i) {					//Constructor
	panjang = i;
	arr = new int[i];
	isiData();
}