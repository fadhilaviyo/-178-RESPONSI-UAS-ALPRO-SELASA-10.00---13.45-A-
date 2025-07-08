#include <iostream>
using namespace std;

struct PERPUS
{
	string buku [5];
	int stok [5];
	string penulis [5];
};

void inputdata (PERPUS &perpus)
{
	cout << "Masukkan Nama Buku : ";
	cin >> perpus.buku[0];
	cout << "Masukkan Stok Buku : ";
	cin >> perpus.stok[0];
	cout << "Masukkan Penulis Buku : ";
	cin >> perpus.penulis[0];
	
	cout << "Masukkan Nama Buku : ";
	cin >> perpus.buku[1];
	cout << "Masukkan Stok Buku : ";
	cin >> perpus.stok[1];
	cout << "Masukkan Penulis Buku : ";
	cin >> perpus.penulis[1];
	
	cout << "Masukkan Nama Buku : ";
	cin >> perpus.buku[2];
	cout << "Masukkan Stok Buku : ";
	cin >> perpus.stok[2];
	cout << "Masukkan Penulis Buku : ";
	cin >> perpus.penulis[2];
	
	cout << "Masukkan Nama Buku : ";
	cin >> perpus.buku[3];
	cout << "Masukkan Stok Buku : ";
	cin >> perpus.stok[3];
	cout << "Masukkan Penulis Buku : ";
	cin >> perpus.penulis[3];
	
	cout << "Masukkan Nama Buku : ";
	cin >> perpus.buku[4];
	cout << "Masukkan Stok Buku : ";
	cin >> perpus.stok[4];
	cout << "Masukkan Penulis Buku : ";
	cin >> perpus.penulis[4];
	
	
}

void bacaf ()
{
	
}

void tampil (PERPUS & perpus)
{
	
}

void carinama (PERPUS &perpus)
{
	int i,n;
	string cnama;
	cout << "Cari Nama Buku : ";
	cin >> cnama;
	for (i = 0; i < n ; i++)
	{
		if (perpus.buku[i]== cnama)
		{
			cout << "Buku Yang Dicari Ditemukan" << endl;
			cout << "Nama Buku : " << perpus.buku[i] << endl;
			cout << "Stok Buku : " << perpus.stok[i] << endl;
			cout << "Penulis Buku : " << perpus.penulis[i] << endl;
		}
	}
}

void cpenulis (PERPUS & perpus)
{
	int i,n;
	string cpenulis;
	cout << "Cari Penulis Buku : ";
	cin >> cpenulis;
	for (i = 0; i < n ; i++)
	{
		if (perpus.penulis[i] == cpenulis)
		{
			cout << "Buku Yang Dicari Ditemukan" << endl;
			cout << "Nama Buku : " << perpus.buku[i] << endl;
		}
	}
}

void cristok (PERPUS &perpus)
{
	int i,n;
	int cristok;
	for (i = 0; i < n ; i++)
	{
		if (perpus.stok[i] < 5 )
		{
			cout << "Buku Yang Dicari Ditemukan" << endl;
			cout << "Nama Buku : " << perpus.buku[i] << endl;
		}
	}
}

int main ()
{
	int pil;
	PERPUS perpus;
	cout << "PERPUSTAKAAN" << endl;
	inputdata(perpus);
 	carinama(perpus); 
 	cpenulis(perpus);
 	cristok(perpus);

}

