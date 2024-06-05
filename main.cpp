#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <time.h>
#include <string.h>
using namespace std;

void showMenu();
int mainMenuSelection(int);
void welcomeScreen();
void receipt();
void showLogo();
double enterAmountScreen(double);

void waiting(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{
    int choice, account;
    string pin = "";
    char ast;

    cout << fixed << showpoint << setprecision(2);
    welcomeScreen();
    system("cls");
    showLogo();
    cout<<"\n\t\t\tUSE THE FOLLOWING AS THE ACCOUNT NUMBER AND PASSWORD: ";
    cout<<"\n\t\t\tACCOUNT NUMBER: 221215      PASSWORD : 1123 ";
    cout<<"\n\t\t\tACCOUNT NUMBER: 114456      PASSWORD : 2266 ";
    cout<<"\n\t\t\tACCOUNT NUMBER: 996357      PASSWORD : 4578 ";
    cout <<"\n\n\t\t\t  Please enter your Bank Account Number : ";
    cin >> account;
    cout <<"\n\t\t\t  Please enter Personal Identification Number(PIN) : ";
    ast = _getch();
    //cin >> pin;

    while(ast!=13)
    {
        pin.push_back(ast);
        cout << '*';
        ast = _getch();

    }
    if ((account!=221215 && pin!="1123") && (account!= 114456 && pin!= "2266") && (account!= 996357 && pin!= "4578"))
    {
        cout << "\n\t\t\tInvalid Bank Account and PIN. Please try again!"<<endl;
        waiting(800);
        getch();

    }
    else
    {
	//Create a do\while loop
        do
		{
			//Display the menu and get the user's choice.
			showMenu();
			cin >> choice;
			//Validate the menu selection.
			while (choice < 1 || choice > 5)
			{
				cout << "\n\t\t\tPlease enter a valid choice from 1, 2, 3, 4, or 5: ";
				cin >> choice;
			}
			//Function to choose in the main menu selection1353

		int withdrawChoice, depositChoice;
		int checkBalanceChoice, fundsTransferChoice;
		double money = 0.0, currbal=20000.00;
		char conf;
			if (choice==1)
			{
					system("cls");
					showLogo();
					cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WITHDRAWAL TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
					cout << "\n\n\t\t\t [ 1 ] From Current Account " << endl;
					cout << "\t\t\t [ 2 ] From Savings Account " << endl;
					cout << "\t\t\t [ 3 ] Quick Cash" << endl;
					cout << "\t\t\t [ 4 ] Back to Main Menu" << endl;
					cout << "\t\t\t _____________________________________________"<<endl;
					cout << "\t\t\t Enter your withdraw transaction: ";
					cin >> withdrawChoice;
						while (withdrawChoice <1 || withdrawChoice >4 )
							{
								system("cls");
								showLogo();
								cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WITHDRAWAL TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
								cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1, 2, 3 or 4 :  ";
								cin >> withdrawChoice;
							}
						if (withdrawChoice == 4)
						{
							showMenu();
						}
						//Quick Cash
						else if (withdrawChoice == 3)
						{
							//fn1353
							int amount1;
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 QUICK CASH TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t REMAINING BALANCE : Rs. "<<currbal<<endl;
							cout << "\n\t\t\t Enter the Amount (Rs.) : ";
							cin >> amount1;
                            if(amount1 >= 500 && amount1 <= currbal-500 ){
                                cout << "\n\t\t\t Your remaining quick cash balance: Rs. "<<currbal - amount1<<endl;
                                waiting(3000);
                                receipt();
                                cout << "\n\t\t\t|TRANSACTION:\t\t    QUICK WITHDRAWAL  |"
                                     << "\n\t\t\t|AMOUNT:\t\t    "<<amount1<<".00\t      |"
                                     << "\n\t\t\t|CURRENT BAL:\t\t    "<<currbal - amount1<<".00\t      |"
                                     << "\n\t\t\t|AVAILABLE BAL:\t\t    "<<currbal - amount1<<".00\t      |"
                                     << "\n\t\t\t|\t\t\t\t\t      |\n\t\t\t|NEVER SHARE YOUR PIN TO ANYONE!.  |\t\t"
                                     << "\n\t\t\t|\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2|";
                                waiting(10000);
                                showMenu();

                                }
                            else{
                                    cout<<"Invalid Transaction! Please Enter A Valid Amount!";
                                    waiting(2000);
                                    showMenu();
                                }
						}
						else if (withdrawChoice == 2)
						{
							int amount2;
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CASH SAVINGS TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t AVAILABLE BALANCE : Rs. "<<currbal<< endl;
							cout << "\t\t\t Enter the amount : ";
							cin >> amount2;
							if(amount2 >= 500 && amount2 <= currbal-500 ){
                                cout << "\t\t\t Your remaining savings balance: Rs. "<<currbal - amount2<<endl;
                                waiting(5000);
                                system("cls");
                                receipt();
                                cout << "\n\t\t\t|TRANSACTION:\t\t    SAVINGS WITHDRAWAL|"
                                     << "\n\t\t\t|AMOUNT:\t\t    "<<amount2<<".00\t      |"
                                     << "\n\t\t\t|CURRENT BAL:\t\t    "<<currbal - amount2<<".00\t      |"
                                     << "\n\t\t\t|AVAILABLE BAL:\t\t    "<<currbal - amount2<<".00\t      |"
                                     << "\n\t\t\t|\t\t\t\t\t      |\n\t\t\t|NEVER SHARE YOUR PIN TO ANYONE!.  |\t\t      |"
                                     << "\n\t\t\t|\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2|";
                                waiting(10000);
                                showMenu();
							}
							else{
                                    cout<<"Invalid Transaction! Please Enter A Valid Amount!";
                                    waiting(2000);
                                    showMenu();
							}
						}
						else if (withdrawChoice == 1)
						{
							int amount3;
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CASH CHECKING TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t AVAILABLE BALANCE : Rs. "<<currbal<< endl;
							cout << "\t\t\t Enter the amount : ";
							cin >> amount3;
							if(amount3 >= 500 && amount3 <= currbal-500 ){
                                cout << "\t\t\t Your remaining check balance: Rs. "<<currbal - amount3<<endl;
                                waiting(3000);
                                system("cls");
                                receipt();
                                cout << "\n\t\t\t|TRANSACTION:\t\t    CASH WITHDRAWAL   |"
                                     << "\n\t\t\t|AMOUNT:\t\t    "<<amount3<<".00\t      |"
                                     << "\n\t\t\t|CURRENT BAL:\t\t    "<<currbal - amount3<<".00\t      |"
                                     << "\n\t\t\t|AVAILABLE BAL:\t\t    "<<currbal - amount3<<".00\t      |"
                                     << "\n\t\t\t|\t\t\t\t\t      |\n\t\t\t|NEVER SHARE YOUR PIN TO ANYONE!. |\t\t"
                                     << "\n\t\t\t|\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2|";
							waiting(10000);
							showMenu();
							}
							else{
                                    cout<<"Invalid Transaction! Please Enter A Valid Amount!";
                                    waiting(2000);
                                    showMenu();
							}
						}
			}
			else if(choice==2)
			{
						system("cls");
						showLogo();
						cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DEPOSIT TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout << "\n\n\t\t\t [ 1 ] To Current Account" << endl;
						cout << "\t\t\t [ 2 ] To Savings Account" << endl;
						cout << "\t\t\t [ 3 ] Back to Main Menu" << endl;
						cout << "\t\t\t _____________________________________________"<<endl;
						cout << "\t\t\t Enter your deposit transaction: ";
						cin >> depositChoice;
						while (depositChoice < 1 || depositChoice > 3)
							{
								system("cls");
								showLogo();
								cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DEPOSIT TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
								cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1, 2 or 3 :  ";
								cin >> depositChoice;
							}
						if (depositChoice == 3)
						{
							showMenu();
						}
						else if (depositChoice == 2)
						{
							int depamount1;
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SAVINGS DEPOSIT TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t Enter the deposit amount : Rs. ";
							cin >> depamount1;
							cout << "\t\t\t Your New Balance: Rs. "<<depamount1+currbal<<endl;
							waiting(5000);
							system("cls");
							showMenu();

						}
						else if (depositChoice == 1)
						{
							int depamount2;
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHECK DEPOSIT TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t Enter the deposit amount : Rs. ";
							cin >> depamount2;
							cout << "\t\t\t Your New Balance: Rs. "<<depamount2+currbal<<endl;
							waiting(5000);
							system("cls");
							showMenu();
						}
			}
			else if (choice==3)
			{
						system("cls");
						showLogo();
						cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHECK BALANCE TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout << "\n\n\t\t\t [ 1 ] From Current Account" << endl;
						cout << "\t\t\t [ 2 ] From Savings Account" << endl;
						cout << "\t\t\t [ 3 ] Back to Main Menu" << endl;
						cout << "\t\t\t _____________________________________________"<<endl;
						cout << "\t\t\t Enter Your Check Balance Choice: ";
						cin >> checkBalanceChoice;
							while (checkBalanceChoice < 1 || checkBalanceChoice > 3)
							{
								system("cls");
								showLogo();
								cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHECK BALANCE TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
								cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1, 2 or 3 :  ";
								cin >> checkBalanceChoice;
							}
						if (checkBalanceChoice == 3)
						{
							showMenu();
						}
						else if (checkBalanceChoice ==2)
						{
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BALANCE SAVINGS TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t NEW AVAILABLE BALANCE : Rs. "<<currbal;
							waiting(3000);
							showMenu();
						}
						else if (checkBalanceChoice ==1)
						{
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BALANCE CHECK TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t NEW CHECK BALANCE : Rs. "<<currbal;
							waiting(3000);
							showMenu();
						}
			}
			else if (choice==4)
			{
						system("cls");
						showLogo();
						cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FUND TRANSFER TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout << "\n\n\t\t\t [ 1 ] Transfer from Savings to Current Account" << endl;
						cout << "\t\t\t [ 2 ] Transfer from Current to Savings Account" << endl;
						cout << "\t\t\t [ 3 ] Back to Main Menu" << endl;
						cout << "\t\t\t _____________________________________________"<<endl;
						cout << "\t\t\t Enter Your Funds Transfer Transaction: ";
						cin >> fundsTransferChoice;
						while (fundsTransferChoice < 1 || fundsTransferChoice > 3)
							{
								system("cls");
								showLogo();
								cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FUND TRANSFER TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
								cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1, 2 or 3 :  ";
								cin >> fundsTransferChoice;
							}
						if (fundsTransferChoice == 3)
						{
							showMenu();
						}
						else if (fundsTransferChoice ==2)
						{
							int accntNo, checkNo, amntNo;
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHECK TRANSFER TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t NEW CHECK BALANCE : Rs. "<<currbal;
							cout << "\n\t\t\t Account Number (for Transfer) : ";
							cin >> accntNo;
							cout << "\n\t\t\t Check Number : ";
							cin >> checkNo;
							cout << "\n\t\t\t Amount Transfer : Rs. ";
							cin >> amntNo;
							while (amntNo <= 500 && amntNo >= 20000)
							{
								system("cls");
								showLogo();
								cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHECK TRANSFER TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
								cout << "\n\n\t\t\t Invalid Amount!\n\t\t\t Please try again!";
								cout << "\n\t\t\t Please enter Amount Transfer : Rs. ";
								cin >> amntNo;

							}
							cout << "Please Wait....Your Transaction Is Being Processed...... ";
							waiting(1000);
							cout << "\n\n\t\t\t The amount of Rs. "<<amntNo<<" has been transfered to \n\t\t\t "<<accntNo<<" with a check # "<<checkNo<<endl;
							waiting(7000);
							showMenu();
						}
						else if (fundsTransferChoice ==1)
						{
							int accntNo, checkNo, amntNo;
							system("cls");
							showLogo();
							cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SAVINGS TRANSFER TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2";
							cout << "\n\n\t\t\t NEW SAVINGS BALANCE : Rs. "<<currbal;
							cout << "\n\t\t\t Account Number (for Transfer) : ";
							cin >> accntNo;
							cout << "\n\t\t\t Amount Transfer : Rs. ";
							cin >> amntNo;
							while (amntNo <= 500 && amntNo >= 20000)
							{
								system("cls");
								showLogo();
								cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SAVINGS TRANSFER TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2";
								cout << "\n\n\t\t\t Invalid Amount!\n\t\t\t Please try again!";
								cout << "\n\t\t\t Please enter Amount Transfer : Rs. ";
								cin >> amntNo;

							}
							cout << "Please Wait....Your Transaction Is Being Processed...... ";
							waiting(1000);
							cout << "\n\n\t\t\t The amount of Rs. "<<amntNo<<" has been transfered to "<<accntNo;
							waiting(10000);
							showMenu();
						}
			}
			else if (choice ==5)
			{
						cout << " \n\t\t\t Thank You For Using Our Services!" << endl << endl;
						getch();
			}
		} while (choice != 5);
 }
		return 0;

}
	//Function to display the welcome screen
	void welcomeScreen()
	{
		cout<<"\n\n\n\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
        cout<<"\n\t\t\t ************** WELCOME TO ***************  ";
        cout<<"\n\t\t\t ~~~~~~~~~~~~ BANK OF SIPNA ~~~~~~~~~~~~~~  ";
        cout<<"\n\t\t\t ************ ATM SERVICES ***************  ";
        cout<<"\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
		cout << "\n\n\t\t\tPlease INSERT your Card To Continue[Press ENTER to insert card]: ";
		cin.get();
	}

	void showLogo()
	{
			cout<<"\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
			cout<<"\n\t\t\t ************** WELCOME TO ***************  ";
			cout<<"\n\t\t\t ~~~~~~~~~~~~ BANK OF SIPNA ~~~~~~~~~~~~~~  ";
			cout<<"\n\t\t\t ************ ATM SERVICES ***************  ";
			cout<<"\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
	}

	void showMenu()
		{
			system("cls");
			showLogo();
			cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU TRANSACTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
			cout << "\n\n\t\t\t [ 1 ] Withdrawal" << endl;
			cout << "\t\t\t [ 2 ] Deposit" << endl;
			cout << "\t\t\t [ 3 ] Check Balance" << endl;
			cout << "\t\t\t [ 4 ] Funds Transfer" << endl;
			cout << "\t\t\t [ 5 ] Exit ATM" << endl;
			cout << "\t\t\t _____________________________________________"<<endl;
			cout << "\t\t\t Enter your choice: ";
		}

	void receipt()
	{
			system("cls");
			showLogo();
			char date[9];
			char time[9];
			_strdate(date);
			_strtime(time);
			cout << "\n\n\t\t\t\t\t PRINTING RECEIPT . . .\n";
			waiting(3000);
			system("cls");
			showLogo();
			cout << endl <<"\n\n\t\t\t|\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 R E C E I P T \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2|";
			cout << "\n\t\t\t|\t\t\t\t\t      |"
				 << "\n\t\t\t|\t     ATM TRANSACTION DETAILS\t      |"
				 << "\n\t\t\t|\t\t\t\t\t      |"
				 << "\n\t\t\t|DATE:\t\t\t    "<<date<<"\t      |"
				 << "\n\t\t\t|TIME:\t\t\t    "<<time<<"\t      |"
				 << "\n\t\t\t|LOCATION:\t\t    AMRAVATI \t      |"
				 << "\n\t\t\t|CARD NUM:\t\t    ************1215  |";
	}

		//Function to enter amount screen
		double enterAmountScreen(double money)
		{
			system("cls");
			int decision;
				cout << endl << "\t\tEnter Amount Screen" << endl;
				cout << "[ 1 ] Enter Amount:";
				cout << endl << "[ 2 ] Back to Main Menu:";
				cout << endl << "Enter your decision for the amount screen: ";
				cin >> decision;
				if (decision == 2)
					{
						showMenu();
					}
				else
					{
						cout << "Please enter the amount: ";
						cin >> money;
					}
			return money;
}
