#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;
	
	mhs1.nim = "20210140011";
	mhs1.nama = "Tasya";
	mhs1.alamat = "Semarang";
	mhs1.umur = 20;

	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukan Nama: ";
	cin >> mhs2.nama;
	cout << "Masukan Alamat: ";
	cin >> mhs2.alamat;
	cout << "Masukan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nnama : " << mhs1.nama;
	cout << "\nalamat : " << mhs1.alamat;
	cout << "\numur : " << mhs1.umur;

}


