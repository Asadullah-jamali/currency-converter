// on 19 March 2024 currency converter using only switch
#include<iostream>
using namespace std;
int main() {
	int a,b,c,e,f,g,h;
	float aa,bb,cc,dd,ee,ff,gg,hh;
	string ab,ac,d;
	ac = "Enter the amount: ";
	for(int i=1; i<=1; i++) {
		cout << "Enter the number of currency you have:" << endl;
		ab=  "1:   EURO \t\t 2:   Bahraini Dinar\n3:   Bangladeshi taka \t 4:   United States Dollar\n5:   Pakistan Rupee \t 6:   Saudi Riyal\n7:   Danish krone \t 8:   Pounds\n9:   UAE Darhames \t 10:  Swiss Franc\n\n";
		cout << ab;
		cin >> a;
		switch(a) { // for currency you have
			case 1:// for euro
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for euro to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " Euros";
						break;
					case 2: // for euro to Bahraini dinars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(0.41) << " Bahraini Dinars";
						break;
					case 3:// for euro to Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*114.46 << " Bangladeshi Takas";
						break;
					case 4: // for euro to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.09 << " United states Dollars";
						break;
					case 5: // for euro to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*304.41 << " Pakistani Rupees";
						break;
					case 6: // for euro to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*4.07 << " Saudi Riyals";
						break;
					case 7: // for euro to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*7.46 << " Danish Kornes";
						break;
					case 8: // for euro to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.85 << " Pounds";
						break;
					case 9: // for euro to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*3.98 << " UAE Dirhams";
						break;
					case 10:// for euro to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.96 << " Swiss Francs";
						break;
				}
				break;
			case 2:// for Bahrainin dinars;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for Bahraini dinar to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*2.45 << " Euros";
						break;
					case 2: // for Bahraini dinar to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(1) << " Bahraini Dinars";
						break;
					case 3:// for bahraini dinar to Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*291.21 << " Bangladeshi Takas";
						break;
					case 4: // for Bahraini dinar to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*2.56 << " United states Dollars";
						break;
					case 5: // for Bahraini dinar to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*739.32 << " Pakistani Rupees";
						break;
					case 6: // for Bahraini dinar to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*9.95 << " Saudi Riyals";
						break;
					case 7: // for Bahraini dinar to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*18.23 << " Danish Kornes";
						break;
					case 8: // for Bahraini dinar to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*2.09 << " Pounds";
						break;
					case 9: // for Bahraini dinar to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*9.74 << " UAE Dirhams";
						break;
					case 10:// for Bahraini dinar to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*2.36 << " Swiss Francs";
						break;
				}
				break;
			case 3:// for Bangladeshi Taka;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for Bangladeshi Taka to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0084 << " Euros";
						break;
					case 2: // for Bangladeshi Taka to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(0.0034) << " Bahraini Dinars";
						break;
					case 3:// for Bangladeshi Taka to  Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " Bangladeshi Takas";
						break;
					case 4: // for Bangladeshi Taka to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0091 << " United states Dollars";
						break;
					case 5: // for Bangladeshi Taka to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*2.54 << " Pakistani Rupees";
						break;
					case 6: // for Bangladeshi Taka to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.034 << " Saudi Riyals";
						break;
					case 7: // for Bangladeshi Taka to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.063 << " Danish Kornes";
						break;
					case 8: // for Bangladeshi Taka to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0072 << " Pounds";
						break;
					case 9: // for Bangladeshi Taka to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.033 << " UAE Dirhams";
						break;
					case 10:// for Bangladeshi Taka to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0081 << " Swiss Francs";
						break;
				}
				break;
			case 4:// for United states Dollars;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for United states Dollars to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.92 << " Euros";
						break;
					case 2: // for United states Dollars to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(0.38) << " Bahraini Dinars";
						break;
					case 3:// for United states Dollars to Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*109.76 << " Bangladeshi Takas";
						break;
					case 4: // for United states Dollars to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " United states Dollars";
						break;
					case 5: // for United states Dollars to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*278.65 << " Pakistani Rupees";
						break;
					case 6: // for United states Dollars to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*3.75 << " Saudi Riyals";
						break;
					case 7: // for United states Dollars to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*6.87 << " Danish Kornes";
						break;
					case 8: // for United states Dollars to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.79 << " Pounds";
						break;
					case 9: // for United states Dollars to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*3.67 << " UAE Dirhams";
						break;
					case 10:// for United states Dollars to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.89 << " Swiss Francs";
						break;
				}
				break;
			case 5:// for Pakistani Rupees;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for  Pakistani Rupees to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0033 << " Euros";
						break;
					case 2: // for  Pakistani Rupees to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(0.0014) << " Bahraini Dinars";
						break;
					case 3:// for  Pakistani Rupees to  Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.4 << " Bangladeshi Takas";
						break;
					case 4: // for  Pakistani Rupees to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0036 << " United states Dollars";
						break;
					case 5: // for  Pakistani Rupees to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " Pakistani Rupees";
						break;
					case 6: // for  Pakistani Rupees to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0013 << " Saudi Riyals";
						break;
					case 7: // for  Pakistani Rupees to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.025 << " Danish Kornes";
						break;
					case 8: // for  Pakistani Rupees to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.0028 << " Pounds";
						break;
					case 9: // for  Pakistani Rupees to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.013 << " UAE Dirhams";
						break;
					case 10:// for  Pakistani Rupees to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.00319 << " Swiss Francs";
						break;
				}
				break;

			// change
			case 6:// for Saudi Riyals
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for Saudi Riyals to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.24 << " Euros";
						break;
					case 2: // for Saudi Riyals to Bahraini dinars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(0.10) << " Bahraini Dinars";
						break;
					case 3:// for Saudi Riyals to Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*29.265012 << " Bangladeshi Takas";
						break;
					case 4: // for Saudi Riyals to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.27 << " United states Dollars";
						break;
					case 5: // for Saudi Riyals to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*74.19 << " Pakistani Rupees";
						break;
					case 6: // for Saudi Riyals to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " Saudi Riyals";
						break;
					case 7: // for Saudi Riyals to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.8170 << " Danish Kornes";
						break;
					case 8: // for Saudi Riyals to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.21 << " Pounds";
						break;
					case 9: // for Saudi Riyals to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.98 << " UAE Dirhams";
						break;
					case 10:// for Saudi Riyals to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.24 << " Swiss Francs";
						break;
				}
				break;
			case 7:// for Danish Kornes;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for Danish Kornes to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.13 << " Euros";
						break;
					case 2: // for Danish Kornes to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.055 << " Bahraini Dinars";
						break;
					case 3:// for Danish Kornes to Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*16.02 << " Bangladeshi Takas";
						break;
					case 4: // for Danish Kornes to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.15 << " United states Dollars";
						break;
					case 5: // for Danish Kornes to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*40.75 << " Pakistani Rupees";
						break;
					case 6: // for Danish Kornes to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.55 << " Saudi Riyals";
						break;
					case 7: // for Danish Kornes to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " Danish Kornes";
						break;
					case 8: // for Danish Kornes to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.11 << " Pounds";
						break;
					case 9: // for Danish Kornes to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.54 << " UAE Dirhams";
						break;
					case 10:// for Danish Kornes to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.13 << " Swiss Francs";
						break;
				}
				break;
			case 8:// for Pounds;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for Pounds to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.17 << " Euros";
						break;
					case 2: // for Pounds to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(0.48) << " Bahraini Dinars";
						break;
					case 3:// for Pounds to  Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*139.94 << " Bangladeshi Takas";
						break;
					case 4: // for Pounds to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.28 << " United states Dollars";
						break;
					case 5: // for Pounds to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*355.63 << " Pakistani Rupees";
						break;
					case 6: // for Pounds to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*4.79 << " Saudi Riyals";
						break;
					case 7: // for Pounds to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*8.73 << " Danish Kornes";
						break;
					case 8: // for Pounds  to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " Pounds";
						break;
					case 9: // for Pounds to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*4.69 << " UAE Dirhams";
						break;
					case 10:// for Pounds to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.14 << " Swiss Francs";
						break;
				}
				break;
			case 9:// for UAE Dirhams;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for UAE Dirhams to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.25 << " Euros";
						break;
					case 2: // for UAE Dirhams to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*(0.10) << " Bahraini Dinars";
						break;
					case 3:// for UAE Dirhams to Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*29.81 << " Bangladeshi Takas";
						break;
					case 4: // for UAE Dirhams to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.27 << " United states Dollars";
						break;
					case 5: // for UAE Dirhams to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*75.76 << " Pakistani Rupees";
						break;
					case 6: // for UAE Dirhams to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.02 << " Saudi Riyals";
						break;
					case 7: // for UAE Dirhams to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.86 << " Danish Kornes";
						break;
					case 8: // for UAE Dirhams to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.21 << " Pounds";
						break;
					case 9: // for UAE Dirhams to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " UAE Dirhams";
						break;
					case 10:// for UAE Dirhams to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.24 << " Swiss Francs";
						break;
				}
				break;
			case 10:// for Swiss Francs;
				cout <<endl<< "Enter the number you want to convert: " <<endl<< endl;
				cout << ab;
				cin >> b;
				switch(b) { // for currency you change for 10 currency
					case 1:// for  Swiss Francs to euro
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.02 << " Euros";
						break;
					case 2: // for  Swiss Francs to Bahraini dinar
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.42 << " Bahraini Dinars";
						break;
					case 3:// for  Swiss Francs to  Bangladeshi Takas
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*122.58 << " Bangladeshi Takas";
						break;
					case 4: // for  Swiss Francs to United States Dollars
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1.12 << " United states Dollars";
						break;
					case 5: // for  Swiss Francs to Pakistani rupees
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*311.49 << " Pakistani Rupees";
						break;
					case 6: // for Swiss Francs to Saudi Riyals
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*4.20 << " Saudi Riyals";
						break;
					case 7: // for  Swiss Francs to danish kornes
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*7.65 << " Danish Kornes";
						break;
					case 8: // for  Swiss Francs to pounds
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*0.88 << " Pounds";
						break;
					case 9: // for  Swiss Francs to uae dirhams
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*4.11 << " UAE Dirhams";
						break;
					case 10:// for  Swiss Francs to swiss francs
						cout << ac;
						cin >> aa;
						cout << "You have " << aa*1 << " Swiss Francs";
						break;
				}
				break;

		}
		cout <<endl<< endl<< "You want to change other curreny enter \"y\": ";  // relooping
		cin >> d;
		cout << endl;
		if(d == "y" or d == "Y") {
			i = 0;
		} else {
			i=2;
		}

	}
	return 0;
}