#include <iostream>
//#include <cmath>
using namespace std;

//double luasLingkaran(double r){
//	double pi = M_PI;
//	return pi*r*r;
//}

	
	void absen(string name, int npm){
		cout << name << "-" << npm;
	}
	
int main(){	

//	double r;
//	
//	cin >> r;
//	
//	cout << "Luas Lingkaran: " << luasLingkaran(r);
//	

	string name;
	int npm;
	
	getline(cin, name);
	cin >> npm;
	
	absen(name, npm);
	
	return 0;
}
