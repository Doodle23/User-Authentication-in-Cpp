// Authenticate_System.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "AuthSys.h"


int main()
{
	int n;
	char opt;

	fstream F1;

	F1.open("AccData.txt", ios::out | ios::in | ios::app);

	if (!F1)
	{
		cout << "\n\n\tError in Creating File!!!\n";
		return 0;
	}
	else
	{
		cout << "\n\n\tFile Created Successfully!\n";
	}


	AuthSys A1;

L23: cout << "\n\n\t\t\tWELCOME TO AUTHENTICATION SYSTEM";

	cout << "\n\n\t[1]\tREGISTER ID";
	cout << "\n\t[2]\tLOGIN";
	cout << "\n\t[3]\tFORGOT PASSWORD";

	cout << "\n\n\tSelect : ";
	cin >> n;

	switch (n)
	{
	case 1:  A1.IDSet();
		cout << "\n\n\tContinue (Y/N): ";
		cin >> opt;
		if (opt == 'Y' || opt == 'y')
		{
			goto L23;
			break;
		}
		else
		{
			cout << "\n\n\tThank You! For using Authentication System ";
			exit;
		}



	case 2: A1.IDLog();
		cout << "\n\n\tContinue (Y/N): ";
		cin >> opt;
		if (opt == 'Y' || opt == 'y')
		{
			goto L23;
			break;
		}
		else if (opt == 'N' || opt == 'n')
		{
			cout << "\n\n\tThank You! For using Authentication System\n\n ";
			break;
		}

	case 3: A1.IDRst();
		cout << "\n\n\tContinue (Y/N): ";
		cin >> opt;
		if (opt == 'Y' || opt == 'y')
		{
			goto L23;
			break;
		}
		else if (opt == 'N' || opt == 'n')
		{
			cout << "\n\n\tThank You! For using Authentication System\n\n ";
			exit(0);
		}
	default:
		cout << "\n\tIncorrect Choice!";
		cout << "\n\n\tContinue (Y/N): ";
		cin >> opt;
		if (opt == 'Y' || opt == 'y')
		{
			goto L23;
			break;
		}
		else if (opt == 'N' || opt == 'n')
		{
			cout << "\n\n\tThank You! For using Authentication System\n\n ";
			exit(0);
		}
	}

}

