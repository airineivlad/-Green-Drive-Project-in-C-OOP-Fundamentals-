#include<iostream>
#include<conio.h>
#include<fstream>
#include<time.h>
#include<string>

#include "Airinei_Vlad-1032_ClassHeader.h"

using namespace std;

void main(int argc, char* argv[]){

	Motorizare m(true, "gasoline", 240, 1980);
	//Motorizare r(m);
	//m = r/2;
	//m -= 3;
	//m *= 2;
	//cout << m;
	//
	//--m;
	//cout << m;
	//if (!m==false){
	//	cout << "Operatorul !" << endl;
	//}
	//cout << r;
	//cin >> m;
	//cout << m;
	//r.ReducereViteza(10);
	//m = r;
	//m.setCapacitateCilindrica(300);
	//cout << m;
	//m.setCapacitateCilindrica(900);
	//cout << m;

	//Automobil au("auto1",r,13,70,19,150);
	//cout << endl<<au;
	//Automobil b("auto2", true, "gasoline", 170, 1500, 13, 70, 9, 150);
	//cout << endl << b;
	//Automobil c(au);
	//c.setMotor(m);
	//cout << endl << c;
	//c = au;
	//cout << endl << c;
	//cin >> c;
	//cout << endl << c.DiferentaConsumMediu();

	Punct p("right_down_corner", 52.51, 13.18);
	p += 2;

	//cout << p<<endl;

	//Punct f(p);
	//cout << f << endl;
	//cin >> f;
	//cout << f << endl;

	//f.setTip("left_up_corner");
	//f.setLatitudine(6);
	//f.setLongitudine(9);

	//if (p>f){
	//	cout << "F"<<endl;
	//}

	//cout << f;

	//Punct f3 = f + f;
	//cout << f3;

	//Punct f4 = f3--;
	//cout << f3<<f4;
	//cout << long double(f3);

	//Punct *a = new Punct[4];
	//a[1] = p;
	//a[2] = ++p;
	//a[3] = ++p;

	//cout << endl;
	//for (int i = 0; i <= 2; i++){
	//cout << a[i];
	//}
	//
	//GeoCircle cerc1("circle", "galben", p, 50);
	//cout << cerc1;
	////cin >> cerc1;
	//GeoCircle cerc2(cerc1);
	//cerc2.setRest("roz");
	//cout << cerc2;
	//cerc1 = cerc2;
	//cerc1.ScadeRaza(5);
	//cout << cerc1;

	//GeoRectangle drept1("rectangle", "red", 1.1, 1.2, 11.11, 12.12);
	//cout << drept1;
	//cin >> drept1;
	//cout << drept1;

	//Traseu t("auto1", 1439467747492,15.333,16.222, 130);
	//cout << t;
	//cin >> t;
	//t.CresteViteza(15);
	//t.setCoord(p);
	//cout << t;

	//TelematicsTxt telem;
	//telem.ReadImplicit("telematics.txt");
	//cout << telem.TraseReturn(2);
	//AutoTxt aut;
	//aut.ReadImplicit("auto.txt");
	//GeoFenceTxt geof;
	//geof.ReadImplicit("geofence.txt");
	AutoTxt aut;
	GeoFenceTxt geof;
	TelematicsTxt telem;

	

	
	if (argc == 2){

		aut.ReadImplicit(argv[1]);

		geof.ReadImplicit("geofence.txt");

		telem.ReadImplicit("telematics.txt");
	}
	else if (argc == 3){
		aut.ReadImplicit(argv[1]);

		geof.ReadImplicit(argv[2]);

		telem.ReadImplicit("telematics.txt");
	}
	else if (argc == 4){

		aut.ReadImplicit(argv[1]);


		geof.ReadImplicit(argv[2]);

		telem.ReadImplicit(argv[3]);
	}
	else{
		
		aut.ReadImplicit("auto.txt");

		geof.ReadImplicit("geofence.txt");

		
		telem.ReadImplicit("telematics.txt");

	}
	
	
	int ok = 0;
	do{
		cout << endl;
		cout << "--------- Meniu Rapoarte -----------" << endl;
		cout << "1) Raport numar total de automobile" << endl;
		cout << "2) Raport consumul general al automobilelor" << endl;
		cout << "3) Raport viteza generala a automobilelor" << endl;
		cout << "4) Raport numarul total de puncte telematice" << endl;
		cout << "5) Raport viteza medie parcursa in punctele telematice" << endl;
		cout << "6) Raport viteza medie pentru un autovehicul in punctele telematice" << endl;
		cout << "7) Exit" << endl<<endl;
		cout << "Introduceti numarul optiunii: " ;
		cin >> ok;

		switch (ok)
		{
		case 1:
			aut.raportNumarAutomobile();
			break;

		case 2:
			aut.raportConsumMediuTotalGeneral();
			break;
		case 3:
			aut.raportVitezaMediuTotalGeneral();
			break;

		case 4:
			telem.raportPuncteTelematice();
			break;

		case 5:
			telem.raportVitezaMedie();
			break;

		case 6:
			cout << "Introduceti denumirea autovehiculului: ";
			char numeA[200];
			cin >> numeA;
			cout << endl;
			telem.raportVitezaMedieAutovehiculX(numeA);
			break;

		case 7:
			cout << "O zi buna!" << endl;
			break;

		default:
			cout << ok << " nu este o optiune valida \n";
			cout << endl;
		}

	} while (ok != 7);
	
	_getch();
}