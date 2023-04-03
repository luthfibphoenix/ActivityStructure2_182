#include <iostream>

using namespace std;

struct AlamatDetail
{
	string desa;
	string kota; 
};

struct Mahasiswa
{
	string	nim;
	string	nama;
	string	alamat;
	int		umur;
};

int main()
{

	Mahasiswa mhs;

	cout << "masukan nim : ";
	cin >> mhs.nim;
	cout << "masukan nama : ";
	cin >> mhs.nama;
	cout << "Alamat" << endl;
	cout << "\t desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukan umur : ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;

}