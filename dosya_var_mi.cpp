// Kendi dizinindeki bir dosyanin var olup olmadigini bulan program

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream dosya;
	dosya.open("deneme.txt");	// dosyayi acar
	if (dosya.is_open()==true){		// dosya acildi ise true doner
		cout << "\nDOSYA BULUNDU!";
	}else{	// aksi durumda acilmadi ise dosyanin o dizinde var olmadigi anlasilir
		cout << "\nDOSYA BULUNAMADI.";
	}
	dosya.close();	// kapatilir
	cout << endl;
	system("pause");
	return 0;
}
