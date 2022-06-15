#include <iostream>
using namespace std;

class study9{
public:
void input();
void proses();
void output();

private:
	
  char kelas[10];
  string nim[10];
  string nama[10];
  int jumlahKelas;
  int jumlahSiswa;

  struct siswa{
  		string nonim,name; 
  		char clas;
};
	siswa student[10][10];

};

void study9::input(){
  cout<<"Masukkan Jumlah Kelas : ";
  cin>>jumlahKelas;
  cout<<"Masukkan Jumlah Mahasiswa Setiap Kelas: ";
  cin>>jumlahSiswa;
  cout<<endl;
  
  for(int i=0;i<jumlahKelas;i++){
  	cout<<"Masukkan Kelas: ";
  	cin>>kelas[i];
  	for(int j=0;j<jumlahSiswa;j++){
  		cout<<"Masukkan NIM: ";
  		cin>>nim[j];
  		cout<<"Masukkan Nama: ";
  		cin>>nama[j];
	  }
	  cout<<endl;
  }
}
void study9::proses(){
	for(int i=0;i<jumlahKelas;i++){
    student[i][0].clas=kelas[i];
    for(int j=0;j<jumlahSiswa;j++){
    student[i][j].nonim=nim[j];
      student[i][j].name=nama[j];
    }
  }
}
void study9::output(){
  cout << "|  KELAS   |   NIM    |    NAMA   |" << endl ;
  cout << "===================================" << endl ;
  for(int i=0;i<jumlahKelas;i++){
    cout<<"| "<<student[i][0].clas<<"\t\t\t"<<"|";
    for(int j=0;j<jumlahSiswa;j++){
      cout<<student[i][j].nonim<<"\t\t |"<<student[i][j].name<<"|"<<endl<<"\t\t\t|";
      
		}
		cout<<endl;
	}
}


int main() {
	study9 s;
	s.input();
	s.proses();
	s.output();
}