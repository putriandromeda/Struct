#include <iostream>

using namespace std;

struct nilaiMhs
{
    float tugas,kuis,uts,uas,a;
}
Mhs;
int main()
{
    cout<<"\t\t|-------------------------------------------------------------------|\t\n";
    cout<<"\t\t|                          NILAI MAHASISWA                          |\n";
    cout<<"\t\t|-------------------------------------------------------------------|\t\n";
    cout<<"masukkan nilai tugas harian anda\t\t:";
    cin>>Mhs.tugas;

    cout<<"masukkan nilai kuis anda\t\t:";
    cin>>Mhs.kuis;

    cout<<"masukkan nilai UTS anda\t\t:";
    cin>>Mhs.uts;

    cout<<"masukkan nilai UAS anda\t\t:";
    cin>>Mhs.uas;

    Mhs.a=Mhs.tugas*0.1+Mhs.kuis*0.2+Mhs.uts*0.3+Mhs.uas*0.4;
    cout<<"nilai tugas anda\t\t:"<<Mhs.tugas<<endl;
    cout<<"nilai kuis anda\t\t:"<<Mhs.kuis<<endl;
    cout<<"nilai UTS anda\t\t:"<<Mhs.uts<<endl;
    cout<<"nilai UAS anda\t\t:"<<Mhs.uas<<endl;
    cout<<"total nilai anda\t\t:"<<Mhs.a<<endl;

    if (Mhs.a>=85)
        cout<<"Nilai anda A";
    else if (Mhs.a>=70)
        cout<<"Nilai anda B";
    else if (Mhs.a>=55)
        cout<<"Nilai anda C";
    else if (Mhs.a>=40)
        cout<<"Nilai anda D";
    else if (Mhs.a<40)
        cout<<"Nilai anda E";
}
