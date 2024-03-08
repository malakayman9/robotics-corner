#include<iostream>
using namespace std;


int main()
{
	while(1)
	{
		
		cout << "enter 0 to Creat account		  " << endl;
		cout << "enter 1 to Balance inquiry		  " << endl;
		cout << "enter 2 to Withdraw			  " << endl;
		cout << "enter 3 to Deposit               " << endl;
		cout << "enter 4 to Interest calculation  " << endl;
		cout << "enter 5 to Exit    test     	  " << endl;
		int x;
		cin >> x;
		string user_name;
		switch (x)
		{
			case 0:
					
					int deposit_amount ;
					cout << "plz enter user name" << endl;
					cin >> user_name;
					cout << "plz enter initial deposit amount" << endl;
					cin >> deposit_amount;
					for (; deposit_amount < 100; )
					{

						cout << "the deposit must be at least $100" << endl;
						cout << "plz enter initial deposit amount" << endl;
						cin >> deposit_amount;

					}

					cout << "your account is created " << endl;
					cout << "your balance =" << deposit_amount << endl;

					break;

			case 1:

					cout << "your balance =" << deposit_amount << endl;

					break;


			case 2:
					int withdrawal ;
					cout << "plz enter withdrawal amount" << endl;
					cin >> withdrawal;

					for (; withdrawal > deposit_amount; )
					{

						cout << "insufficient funds" << endl;
						cout << "plz try again" << endl;
						cin >> withdrawal;

					}
					deposit_amount = deposit_amount - withdrawal;
					cout << "your withdrawal is completed successfully" << endl;
					cout << "your balance =" << deposit_amount << endl;


					break;

			case 3:

					int deposit ;
					cout << "plz enter deposit amount" << endl;
					cin >> deposit;
					for (; deposit < 50; )
					{

						cout << "the deposit must be at least $50" << endl;
						cout << "plz try again" << endl;
						cin >> deposit;

					}
					deposit_amount = deposit_amount + deposit;
					cout << "your withdrawal is completed successfully" << endl;
					cout << "your balance =" << deposit_amount << endl; 

					break;

			case 4:
					int number_of_years ;
					int future_balance ;
					cout << "enter number of years" << endl;
					cin >> number_of_years;
					for ( int i = 0;  i <number_of_years ;  i++)
					{
						future_balance = deposit_amount;
						future_balance = future_balance + future_balance *0.05;
					}
					cout << "your balance will be " << future_balance << " after " << number_of_years << " years " << endl;

					break;

			case 5:
				
					return 0;

					break;


			default:
				cout << "error" << endl;
			
			
		}

	}
}
			
