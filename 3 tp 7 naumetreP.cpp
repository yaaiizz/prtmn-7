#include <iostream>
using namespace std;
void display (int n[5])
{
    cout << "Tampilkan niai: "<<endl;
    for (int i = 0;i<5;++i)
    {
        cout<< "Mahasiswa "<< i + 1 << ": "<<n[i]<<endl;
    }
}
int main()
{
    int nilai[5]= {88,76,90,61,69};
    display(nilai);
    return 0;
}
