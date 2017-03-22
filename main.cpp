#include <iostream>

using namespace std;
int main() {
	
	int skorPemain1 = 0;
	int skorPemain2 = 0;
	int turn = 6;
	int pilihanPemain[5];
		
	cout << "===== Batu Gunting Kertas =====" << endl;
	cout << "1. Batu" << endl;
	cout << "2. Gunting" << endl;
	cout << "3. Kertas" << endl;
	cout << "===============================" << endl;
	cout << "Masukkan Nama Pemain1 : ";
  	string pemain1;
  	getline(cin, pemain1);
  	
  	cout << "Masukkan Nama Pemain2 : ";
  	string pemain2;
  	getline(cin, pemain2);
  	

	while(1) {
		
		if(turn != 0) {
			turn = turn - 1;
			cout << "\nSisa Turn Adalah " << turn << endl;
			cout << "Skor " << pemain1 << " " << skorPemain1 << endl;
			cout << "Skor " << pemain2 << " " << skorPemain2 << endl;
			cout << pemain1 << " Masukkan Pilihan : "; cin >> pilihanPemain[0];
			
			for(int i=0; i<50; i++) {
				cout << endl;
				
			}
			
			cout << "Sisa Turn Adalah " << turn << endl;
			cout << pemain2 << " Masukkan Pilihan : "; cin >> pilihanPemain[1];
				
			if(pilihanPemain[0] == pilihanPemain[1]) {
				cout << "Draw Bro~\n";
			} else if(pilihanPemain[0] == 1 && pilihanPemain[1] == 2) {
				cout << pemain1 << " Mengeluarkan Batu || " << pemain2 << " Mengeluarkan Gunting\n"; 
				cout << pemain1 << " Menang\n\n";
				skorPemain1 = skorPemain1 + 1;
			} else if(pilihanPemain[0] == 1 && pilihanPemain[1] == 3) {
				cout << pemain2 << " Mengeluarkan Batu || " << pemain1 << " Mengeluarkan Kertas\n";
				cout << pemain2 << " Menang\n\n";
				skorPemain2 = skorPemain2 + 1;
			} else if(pilihanPemain[0] == 2 && pilihanPemain[1] == 1) {
				cout << pemain2 << " Mengeluarkan Gunting || " << pemain1 << " Mengeluarkan Batu\n";
				cout << pemain1 << " Menang\n\n";
				skorPemain1 = skorPemain1 + 1;
			} else if(pilihanPemain[0] == 2 && pilihanPemain[1] == 3) {
				cout << pemain2 << " Mengeluarkan Gunting || " << pemain1 << " Mengeluarkan Kertas\n";
				cout << pemain2 << " Menang\n\n";
				skorPemain2 = skorPemain2 + 1;
			} else if(pilihanPemain[0] == 3 && pilihanPemain[1] == 1) {
				cout << pemain1 << " Mengeluarkan Kertas || " << pemain2 << " Mengeluarkan Batu\n";
				cout << pemain2 << " Menang\n\n";
				skorPemain2 = skorPemain2 + 1;
			} else if(pilihanPemain[0] == 3 && pilihanPemain[1] == 2) {
				cout << pemain1 << " Mengeluarkan Kertas || " << pemain2 << " Mengeluarkan Gunting\n";
				cout << pemain2 << " Menang\n\n";
				skorPemain2 = skorPemain2 + 1;
			} else if(pilihanPemain[0] < 0 || pilihanPemain[0] > 3) {
				cout << endl << pemain1 << " Ojok Ngawur!!!\n";
				cout << "Denda -1 Skor\n";
				skorPemain1 = skorPemain1 - 1;
			} else if(pilihanPemain[1] < 0 || pilihanPemain[1] > 3) {
				cout << endl << pemain2 << " Ojok Ngawur!!!\n";
				cout << "Denda -1 Skor\n";
				skorPemain2 = skorPemain2 - 1;
			}
			
		}
		
		if(turn < 1) {
			cout << "Buyar! Tidak Ada yang Menang";
			break;
		} else if (skorPemain1 > 2) {
			cout << "\nSisa Turn Adalah " << turn << endl;
			cout << "Skor " << pemain1 << " " << skorPemain1 << endl;
			cout << "Skor " << pemain2 << " " << skorPemain2 << endl;
			cout << pemain1 << " Menang!";
			break;
		} else if (skorPemain2 > 2) {
			cout << "\nSisa Turn Adalah " << turn << endl;
			cout << "Skor " << pemain1 << " " << skorPemain1 << endl;
			cout << "Skor " << pemain2 << " " << skorPemain2 << endl;
			cout << pemain2 << " Menang! Skor Harus 3";
		}
		
	}
	return 0;
}
