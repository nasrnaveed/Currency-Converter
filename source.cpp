#include <iostream>
#include<cstring>
using namespace std;

void mainPkr();
void adminPkr();
void conversionPkr(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainUsd();
void adminUsd();
void conversionUsd(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainEuro();
void adminEuro();
void conversionEuro(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainGbp();
void adminGbp();
void conversionGbp(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainRiy();
void adminRiy();
void conversionRiy(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainKdin();
void adminKdin();
void conversionKdin(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainCan();
void adminCan();
void conversionCan(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainLira();
void adminLira();
void conversionLira(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainYuan();
void adminYuan();
void conversionYuan(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);
void mainKro();
void adminKro();
void conversionKro(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro);

int main()
{
	char cur;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t SELECT YOYR CURRENCY \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For PKR Press P: " << endl;
	cout << "For US.Dollar Press D : " << endl;
	cout << "For Euro Press E : " << endl;
	cout << "For G.B Pound Press G : " << endl;
	cout << "For Saudi Riyal Press R : " << endl;
	cout << "For Kuwaiti Dinar Press K : " << endl;
	cout << "For Canadian Dollar Press C : " << endl;
	cout << "For Turkish Lira Press L : " << endl;
	cout << "For Chinese Yuan Press Y : " << endl;
	cout << "For Norwegian Krone Press N : " << endl;
	cin >> cur;
	
	switch (cur)
	{
	case 'P':
	case 'p':
		mainPkr();
		break;
	case 'D':
	case 'd':
		mainUsd();
		break;
	case 'E':
	case 'e':
		mainEuro();
		break;
	case 'G':
	case 'g':
		mainGbp();
		break;
	case 'R':
	case 'r':
		mainRiy();
		break;
	case 'K':
	case 'k':
		mainKdin();
		break;
	case 'C':
	case 'c':
		mainCan();
		break;
	case 'L':
	case 'l':
		mainLira();
		break;
	case 'Y':
	case 'y':
		mainYuan();
		break;
	case 'N':
	case 'n':
		mainKro();
		break;
	}

	system("pause");
	return 0;
}
void mainPkr()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 156.54;
	pkr = 1;
	euro = 189.73;
	gbp = 220.69;
	riy = 41.74;
	kdin = 520.22;
	can = 128.78;
	lira = 18.76;
	yuan = 24.46;
	kro = 18.85;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t PAKISTANI RUPEE (PKR) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionPkr(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminPkr();
		break;
	}

}
void adminPkr()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionPkr(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionPkr(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in PKR is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}

}
void mainUsd()
{

	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 1;
	pkr = 0.0063;
	euro = 1.19;
	gbp = 1.39;
	riy = 0.27;
	kdin = 3.32;
	can = 0.81;
	lira = 0.11;
	yuan = 0.15;
	kro = 0.16;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t UNITED STATES DOLLAR (USD) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionUsd(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminUsd();
		break;
	}
}
void adminUsd() 
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'P':
			case'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionUsd(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionUsd(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'P':
		case'p':
			cout << "Enter price in Pakitani Rupee to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * pkr << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in USD is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainEuro()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 0.84;
	pkr = 0.0053;
	euro = 1;
	gbp = 1.16;
	riy = 0.22;
	kdin = 2.78;
	can = 0.68;
	lira = 0.095;
	yuan = 0.13;
	kro = 0.099;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t EURO (EUR) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionEuro(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminEuro();
		break;
	}
}
void adminEuro()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'P':
			case 'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionEuro(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionEuro(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * usd << endl;
			break;
		case 'P':
		case 'p':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * pkr << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in Euro is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainGbp()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 0.72;
	pkr = 0.0046;
	euro = 0.86;
	gbp = 1;
	riy = 0.19;
	kdin = 2.39;
	can = 0.59;
	lira = 0.082;
	yuan = 0.11;
	kro = 0.085;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t GREAT BRITAIN POUND (GBP) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionGbp(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminGbp();
		break;
	}
}
void adminGbp()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'P':
			case 'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionGbp(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionGbp(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * euro << endl;
			break;
		case 'P':
		case 'p':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * pkr << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in GBP is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainRiy()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 3.75;
	pkr = 0.024;
	euro = 4.47;
	gbp = 5.20;
	riy = 1;
	kdin = 12.45;
	can = 3.05;
	lira = 0.43;
	yuan = 0.58;
	kro = 0.44;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t SAUDI RIYAL (SAR) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionRiy(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminRiy();
		break;
	}
}
void adminRiy()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'P':
			case 'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionRiy(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionRiy(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * gbp << endl;
			break;
		case 'P':
		case 'p':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * pkr << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in SAR is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainKdin()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 0.30;
	pkr = 0.0019;
	euro = 0.36;
	gbp = 0.42;
	riy = 0.080;
	kdin = 1;
	can = 0.24;
	lira = 0.034;
	yuan = 0.047;
	kro = 0.035;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t KUWAITI DINAR (KWD) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionKdin(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminKdin();
		break;
	}
}
void adminKdin()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'P':
			case 'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionKdin(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionKdin(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in Pound to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * riy << endl;
			break;
		case 'P':
		case 'p':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * pkr << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in KWD is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainCan()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 1.23;
	pkr = 0.0078;
	euro = 1.47;
	gbp = 1.71;
	riy = 0.33;
	kdin = 4.08;
	can = 1;
	lira = 0.14;
	yuan = 0.19;
	kro = 0.14;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CANADIAN DOLLAR (CAD) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionCan(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminCan();
		break;
	}
}
void adminCan()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'P':
			case 'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionPkr(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionCan(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * kdin << endl;
			break;
		case 'P':
		case 'p':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * pkr << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in CAD is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainLira()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 8.75;
	pkr = 0.055;
	euro = 10.44;
	gbp = 12.14;
	riy = 2.33;
	kdin = 29.06;
	can = 7.12;
	lira = 1;
	yuan = 1.35;
	kro = 1.08;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t TURKISH LIRA (TRY) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionLira(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminLira();
		break;
	}
}
void adminLira()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'P':
			case 'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionLira(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionLira(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * can << endl;
			break;
		case 'P':
		case 'p':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * pkr << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in TRY is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainYuan()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 6.45;
	pkr = 0.041;
	euro = 7.70;
	gbp = 8.96;
	riy = 1.72;
	kdin = 21.44;
	can = 5.25;
	lira = 0.73;
	yuan = 1;
	kro = 0.76;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CHINESE YUAN (CNY) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionYuan(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminYuan();
		break;
	}
}
void adminYuan()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cout << "To update price of Norwegian Krone Press N : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'P':
			case'p':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> pkr;
				break;
			case'N':
			case'n':
				cout << "Enter new price of Norwegian Krone : ";
				cin >> kro;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionYuan(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionYuan(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cout << "To convert price of Norwegian Krone Press N : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * lira << endl;
			break;
		case 'P':
		case'p':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * pkr << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Norwegian Krone to covert : ";
			cin >> input;
			cout << "The price in CNY is : " << input * kro << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
void mainKro()
{
	int main;
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	usd = 8.48;
	pkr = 0.054;
	euro = 10.12;
	gbp = 11.77;
	riy = 2.26;
	kdin = 28.17;
	can = 6.90;
	lira = 0.97;
	yuan = 1.31;
	kro = 1;
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t NORWEGIAN KRONE (NOK) \t \t";
	cout << "\n-----------------------------------------------------\n";
	cout << "For Conversion Enter 1 : " << endl;
	cout << "To update prices Enter 2 : " << endl;
	cin >> main;
	switch (main)
	{
	case 1:
		conversionKro(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		break;
	case 2:
		adminKro();
		break;
	}
}
void adminKro()
{
	char u, x = 'Y';
	double usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro;
	char pass[] = "password";
	char check[9];
	cout << "Enter Password : ";
	cin >> check;
	if (strcmp(pass, check) == 0)
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "\t \t ADMIN \t \t ";
		cout << "\n-----------------------------------------------------\n";
		while (x == 'Y' || x == 'y')
		{
			cout << "To update price of US.Dollar Press D : " << endl;
			cout << "To update price of Euro Press E : " << endl;
			cout << "To update price of G.B Pound Press G : " << endl;
			cout << "To update price of Saudi Riyal Press R : " << endl;
			cout << "To update price of Kuwaiti Dinar Press K : " << endl;
			cout << "To update price of Canadian Dollar Press C : " << endl;
			cout << "To update price of Turkish Lira Press L : " << endl;
			cout << "To update price of Chinese Yuan Press Y : " << endl;
			cout << "To update price of Pakistani Rupee Press P : " << endl;
			cin >> u;
			switch (u)
			{
			case 'D':
			case'd':
				cout << "Enter new price of US.Dollar : ";
				cin >> usd;
				break;
			case 'E':
			case 'e':
				cout << "Enter new price of Euro : ";
				cin >> euro;
				break;
			case 'G':
			case 'g':
				cout << "Enter new price of G.B Pound : ";
				cin >> gbp;
				break;
			case 'R':
			case 'r':
				cout << "Enter new price of Saudi Riyal : ";
				cin >> riy;
				break;
			case 'K':
			case 'k':
				cout << "Enter new price of Kuwaiti Dinar : ";
				cin >> kdin;
				break;
			case 'C':
			case 'c':
				cout << "Enter new price of Canadian Dollar : ";
				cin >> can;
				break;
			case 'L':
			case 'l':
				cout << "Enter new price of Turkish Lira : ";
				cin >> lira;
				break;
			case 'Y':
			case'y':
				cout << "Enter new price of Chinese Yuan : ";
				cin >> yuan;
				break;
			case'P':
			case'p':
				cout << "Enter new price of Pakistani Rupee : ";
				cin >> pkr;
				break;
			}
			cout << "\n-----------------------------------------------------\n";
			cout << "To Update other prices press Y to exit press X : ";
			cin >> x;
			if (x == 'X' || x == 'x')
				break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To continue Conversion Press Y : ";
		cin >> u;
		if (u == 'Y' || u == 'y')
			conversionKro(usd, pkr, euro, gbp, riy, kdin, can, lira, yuan, kro);
		else
			cout << "Thanks For Updating !! Exiting " << endl;
	}
	else
		cout << "Wrong Password Exiting!!!!" << endl;

}
void conversionKro(double& usd, double& pkr, double& euro, double& gbp, double& riy, double& kdin, double& can, double& lira, double& yuan, double& kro)
{
	double input;
	char x, y = 'y';
	cout << "\n-----------------------------------------------------\n";
	cout << "\t \t CONVERTER \t \t";
	cout << "\n-----------------------------------------------------\n";
	while (y == 'Y' || y == 'y')
	{
		cout << "To convert price of US.Dollar Press D : " << endl;
		cout << "To convert price of Euro Press E : " << endl;
		cout << "To convert price of G.B Pound Press G : " << endl;
		cout << "To convert price of Saudi Riyal Press R : " << endl;
		cout << "To convert price of Kuwaiti Dinar Press K : " << endl;
		cout << "To convert price of Canadian Dollar Press C : " << endl;
		cout << "To convert price of Turkish Lira Press L : " << endl;
		cout << "To convert price of Chinese Yuan Press Y : " << endl;
		cout << "To convert price of Pakistani Rupee Press P : " << endl;
		cin >> x;
		switch (x)
		{
		case 'D':
		case'd':
			cout << "Enter price in US.Dollar to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * usd << endl;
			break;
		case 'E':
		case 'e':
			cout << "Enter price in Euro to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * euro << endl;
			break;
		case 'G':
		case 'g':
			cout << "Enter price in G.B Pound to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * gbp << endl;
			break;
		case 'R':
		case 'r':
			cout << "Enter price in Saudi Riyal to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * riy << endl;
			break;
		case 'K':
		case 'k':
			cout << "Enter price in Kuwaiti Dinar to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * kdin << endl;
			break;
		case 'C':
		case 'c':
			cout << "Enter price in Canadian Dollar to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * can << endl;
			break;
		case 'L':
		case 'l':
			cout << "Enter price in Turkish Lira. to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * lira << endl;
			break;
		case 'Y':
		case'y':
			cout << "Enter price in Chinese Yuan to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * yuan << endl;
			break;
		case'N':
		case'n':
			cout << "Enter price in Pakistani Rupee to covert : ";
			cin >> input;
			cout << "The price in NOK is : " << input * pkr << endl;
			break;
		}
		cout << "\n-----------------------------------------------------\n";
		cout << "To convert more press Y : " << endl;
		cin >> y;
	}
}
