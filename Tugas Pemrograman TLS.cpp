#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int n, i;

    cout << "Masukkan banyak nilai siswa yang akan diinput : ";
    cin >> n;

    int nilai[n], nilaiA=0, nilaiB=0, nilaiC=0, nilaiD=0;

    //Nilai yang didapatkan dalam bentuk abjad
    for(i=0; i<n; i++){
        cout << "Masukkan nilai siswa yang ke-" << i+1 << " : ";
        cin >> nilai[i];

        if(nilai[i] >= 90 && nilai[i] <= 100){
            cout << "Nilai A\n\n";
            nilaiA++;
        }
        else if (nilai[i] >=85 && nilai[i] < 90){
            cout << "Nilai B\n\n";
            nilaiB++;
        }
        else if (nilai[i] >=80 && nilai[i] < 85){
            cout << "Nilai C\n\n";
            nilaiC++;
        }
        else if (nilai[i] >=0 && nilai[i]<80){
            cout << "Nilai D\n\n";
            nilaiD++;
        }
        else{
            cout << "Data yang anda masukkan tidak valid!\n";
            i--;
        } 
    }

    int totalNilai=0;
    double rataRata=0;
    char rataRataHuruf;

    //Rata-rata nilai siswa
    for(i=0; i<n; i++){
        totalNilai += nilai[i];
    }
    rataRata = totalNilai / n;

    //Banyak siswa yang mendapatkan nilai tiap kategori
    cout << "Banyak siswa yang mendapatkan nilai A adalah " << nilaiA << endl;
    cout << "Banyak siswa yang mendapatkan nilai B adalah " << nilaiB << endl;
    cout << "Banyak siswa yang mendapatkan nilai C adalah " << nilaiC << endl;
    cout << "Banyak siswa yang mendapatkan nilai D adalah " << nilaiD << endl;

    //Output Rata-rata
    if(rataRata >= 90){
            rataRataHuruf = 'A';
        }
    else if (rataRata >=85 && rataRata < 90){
            rataRataHuruf = 'B';
        }
    else if (rataRata >=80 && rataRata < 85){
            rataRataHuruf = 'C';
        }
    else{
            rataRataHuruf = 'D';
        }
    
    cout << "Rata-rata nilai siswa adalah " << rataRata << " (" << rataRataHuruf << ")" << endl;

    return 0;
}