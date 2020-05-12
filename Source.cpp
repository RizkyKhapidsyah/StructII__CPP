#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

typedef struct
{
	long int NIP;
	char Nama[50];
	char Alamat[50];
} Struct_DataDosen;

Struct_DataDosen Dosen1, Dosen2;

int main()
{
	cout << "======================================\n";
	cout << "Data Dosen Pertama (Input)\n";
	cout << "======================================\n";
	cout << "NIP      : "; cin >> Dosen1.NIP;
	cout << "Nama     : "; cin >> Dosen1.Nama;
	cout << "Alamat   : "; cin >> Dosen1.Alamat;

	cout << endl << endl;

	cout << "======================================\n";
	cout << "Data Dosen Kedua (Input)\n";
	cout << "======================================\n";
	cout << "NIP      : "; cin >> Dosen2.NIP;
	cout << "Nama     : "; cin >> Dosen2.Nama;
	cout << "Alamat   : "; cin >> Dosen2.Alamat;
	
	cout << "\n============================================================================" << endl << endl;

	cout << "======================================\n";
	cout << "Data Dosen Pertama (Output)\n";
	cout << "======================================\n";
	cout << "NIP      : " << Dosen1.NIP << endl;
	cout << "Nama     : " << Dosen1.Nama << endl;
	cout << "Alamat   : " << Dosen1.Alamat << endl;

	cout << endl << endl;

	cout << "======================================\n";
	cout << "Data Dosen Kedua (Output)\n";
	cout << "======================================\n";
	cout << "NIP      : " << Dosen2.NIP << endl;
	cout << "Nama     : " << Dosen2.Nama << endl;
	cout << "Alamat   : " << Dosen2.Alamat << endl;

	cout << endl << endl;

	_getch();
	return 0;
}