// 02_HesapMakinesi.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	char kar;
	int a;
	int b;


	cout << "1 operator, 2 de deger gir" << endl;

	cin >> kar;
	cin >> a;
	cin >> b;


	if (kar == '+') {
		cout << a + b << endl;
	} 
	else if (kar == '-'){
		cout << a - b << endl;
	}

	else if (kar == '*') {
		cout << a * b << endl;
	}


	else if (kar == '/') {
		if (b == 0) {
			cout << "0 girme lan" << endl;
		}
		else {
			cout << a / b << endl;
		}
	}
	else {
		cout << "islem yapilamadi, operator girer misiniz.." << endl;

	}
	 


	system("pause");
    return 0;
}

