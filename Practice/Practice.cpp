#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

/*https://paste.ubuntu.com/p/xMTYxqh8hb*/

int main()
{
	srand(time(0));

	string Game[3];
	Game[0] = "tas";
	Game[1] = "kagit";
	Game[2] = "makas";
	
	string secim;

	cout << "OYUNDAN CIKIS YAPMAK ICIN 0'A BASINIZ !!" << endl;
	cout << "tas>makas" << endl;
	cout << "makas>kagit" << endl;
	cout << "kagit>tas" << endl;
	cout << "Seciminizi yapiniz" << endl;
	while (true)
	{
		int random = rand() % 3;//random numbers for computer choice
		string computer = Game[random];//computer choice

		if (secim == "0")//exit number
		{
			break;
		}
		else
		{
			
		
			cin >> secim;
			if (secim == computer)
			{cout << "BERABERE" << endl;}

			else if(secim=="tas"&&computer=="kagit")
			{cout << "KAYBETTINIZ" << endl;}
			else if(secim=="tas"&&computer=="makas")
			{cout << "KAZANDINIZ"<<endl;}
			else if(secim=="makas" && computer=="kagit")
			{cout <<"KAZANDINIZ"<<endl;}
			else if(secim=="kagit"&&computer=="tas")
			{cout<<"KAZANDINIZ"<<endl;}
			else
			{
				cout << "KAYBETTINIZ" << endl;
			}

			cout << "Seciminiz=" << " " << secim << endl;
			cout << "Bilgisayarin Secimi=" << " " << computer << endl;


		}
	}




}