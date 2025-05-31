#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct RuangKelas {
    string kode;
    string lokasi;
    int kapasitas;
    string fasilitas;
};

struct Jadwal {
    string mataKuliah;
    string dosen;
    string waktu;
    string ruang;
};

class jadwalMatkul{
	private:
	int kapasitas;
	int lokasi;
	int fasilitas;
	
	public:
		void login(){
			string username,password;
			if(username != "admin"|| password !="1994"){
			cout<<"Login berhasil. selamat datang!!";
		}else{
			cout<<"Pasword anda salah"<<endl;
		}
};
        void tampilan(){
        	int pilihan;
        	do{
        		cout<<"===============SELAMAT DATANG DI SIMERU================"<<endl;
        		cout<<"Pilih Informasi Kampus";
        		cout<<"1.Informasi ";cin>>pilihan;
        		cout<<"2.Jadwal Mata kuliah";cin>>pilihan;
        		cout<<"3. Cetak mata Kuliah";cin>>pilihan;
        	
        	
			}
		
    int informasi1(){
       	for(ruang1 =30, ruang2= 20, ruang3= 25);
    int informasi2(){
        for(lokasi1 = "Kampus 4",lokasi2 = "Kampus 3",lokasi3 = "kampus 2")
    int informasi3(){
       	for( fasilitas1 = "Banyak komputer",fasilitas2 = "Banyak Kantin",fasilitas3 = "banyak kantin",)
      }
    }
}
        void informasi(){
        	int pilihan;
        	do{
        		cout<<"1. Kampus 4"<<"\n"Informasi1.ruang1<<"\n"Informasi1.lokasi1<<"\n"Informasi1.fasilitas1<<endl;
        		cout<<"2. Kampus 3"<<"\n"Informasi2.ruang2<<"\n"Informasi2.lokasi2<<"\n"Informasi2.fasilitas2<<endl;
        		cout<<"3. Kampus 2"<<"\n"Informasi3.ruang3<<"\n"Informasi3.lokasi3<<"\n"Informasi3.fasilitas3<<endl;
		}while
        	cout<<"Pilih Kampus yang ingin dituju : "<<pilihan<<endl;
        	cout<<"Ruang yang ingin dituju : "<<pilihan<<endl;
        	cout<<"Fasilitas yang di dapat : "<<pilihan<<endl;
        	default<<"Pilihan tidak valid"<<endl;
        	return 1;
        		}
};
        void jadwalKuliah(){
        	int pilihan;
        	do{
        		cout<<"Mata kuliah: "<<endl
        		cout<<"1. Algoritma Pemrograman ";
        		cout<<"   Dosen: Budi";
        		cout<<"   waktu: 07:00";
        		cout<<"   Ruang: 51"<<endl;
        		
				cout<<"2. Matematika diskrit";
				cout<<"   Dosen: Rina";
        		cout<<"   waktu: 10:00";
        		cout<<"   Ruang: 56"<<endl;
        		
				cout<<"3. Pemrograman WEB";
				cout<<"   Dosen: Budi"
        		cout<<"   waktu: 12:00"
        		cout<<"   Ruang: 62"<<endl;
        	cout<<"PILIH MATA KULIAH : ";cin>>pilihan;
			}while{
			cout<<"Mata Kuliah yang Dipilih : "<<pilihan;
			}
		}
		void gantiJadwal() {
        string mk;
        cout<<"Mata kuliah yang ingin diubah: ";
        cin.ignore();getline(cin,mk);
        for (auto& j : daftarJadwal) {
            if (j.mataKuliah == mk) {
                cout<<"Mata Kuliah baru: "; getline(cin,j.mataKuliah);
                cout<<"Dosen baru: "; getline(cin,j.dosen);
                cout<<"Waktu baru: "; getline(cin,j.waktu);
                cout<<"Ruang baru: "; getline(cin,j.ruang);
                cout<<"Jadwal diubah.\n";
                return;
            }
        }
        cout << "Jadwal tidak ditemukan.\n";
}
		void hapusJadwal() {
        string mk;
        cout << "Mata kuliah yang ingin dihapus: ";
        cin.ignore(); getline(cin, mk);
        for()auto it = mataKuliah.begin(); it != mataKuliah.end(); it++) {
            if (it->mataKuliah == mk) {
                mataKuliah.erase(it);
                cout << "Jadwal dihapus.\n";
                return;
            }
        }
        cout << "Jadwal tidak ditemukan.\n";
    }
		void cetakMatkul(){
        ofstream file("jadwal.txt");
        file << "=== JADWAL SIMERU ===\n";
        for (j::jadwalKuliah) {
            file << "Mata Kuliah: "<<j.mataKuliah <<"Dosen: "<<j.dosen
                 << ", Waktu: " <<j.waktu<< ", Ruang: "<<j.ruang<<"\n";
        }
        file.close();
        cout << "Jadwal disimpan ke jadwal.txt\n";
    }
    return 0;
}
		
			
		
		
