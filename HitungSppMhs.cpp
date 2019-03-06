#include <iostream>
using namespace std;

struct mhs{
    char nama [20],nim[10],jurusan[2];
    int sks, program;};

struct mhs bayar;

int main() {
    int bts, var, tetap;
    //input data
    cout<<"\nNama mhs:";cin>>bayar.nama;
    cout<<"NIM:";cin>>bayar.nim;
    cout<<"Jurusan(TI,MI,SI):";
    cin>>bayar.jurusan;
    input:
    cout<<"program (1=D3,2=S1) : ";
    cin>>bayar.program;
    if (bayar.program < 0 || bayar.program > 2)
    {
        cout<<"program tidak sesuai\n";
        goto input;
    }
    cout<<"Jumlah SKS : "; cin>>bayar.sks;

    if (bayar.program==1)
    {
        tetap=500000;
        var=bayar.sks*25000;
    }
    else if (bayar.program==2)
    {
        tetap=7500000;
        var=bayar.sks*50000;
    }
    cout<<"";

    //output data
    cout<<"\n\n----------------------------------------------------------------\n";
    cout<<"                                    output";
    cout<<"\n------------------------------------------------------------------\n";
    cout<<"\nNama mhs = "<<bayar.nama;
    cout<<"\nNIM = "<<bayar.nim;
    cout<<"\nJurusan = "<<bayar.jurusan;
    cout<<"\nProgram = "<<bayar.program;
    cout<<"\nJumlah SKS = "<<bayar.sks;
    cout<<"\nSpp tetap = "<<tetap;
    cout<<"\nSpp Variabel = "<<var;
    cout<<endl;
    return 0;
}