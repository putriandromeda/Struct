#include <iostream>

using namespace std;
struct upahKerja
{
	int jam_kerja,upah,upah_awal,upah_lembur,upah_total;
}
Kerjaan;

int main()
{
	cout<<"\t\t|-------------------------------------------------------------------|\t\n";
	cout<<"\t\t|                          PORTAL HITUNG UPAH KARYAWAN              |\n";
	cout<<"\t\t|-------------------------------------------------------------------|\t\n";
	Kerjaan.upah=500;
	Kerjaan.upah_lembur=15*Kerjaan.upah;
	Kerjaan.upah_awal=7*500;
	cout<<"masukkan jumlah jam kerja : ";
	cin>>Kerjaan.jam_kerja;
	if (Kerjaan.jam_kerja<=7)
		cout<<"gaji anda : "<<Kerjaan.upah*Kerjaan.jam_kerja;
	else if (Kerjaan.jam_kerja>7)
		cout<<"gaji anda : "<<((Kerjaan.jam_kerja-7)*(Kerjaan.upah_lembur)+Kerjaan.upah_awal);

}