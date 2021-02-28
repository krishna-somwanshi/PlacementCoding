#include<iostream>

using namespace std;

class bank
{
	long long int account[ 5 ];
	int balance[ 5 ];
	int amount[ 5 ];
	string name[ 5 ];
	
	
	public:
		void deposit();
		void OpenAccount();
		void Withdraw();
		void show();
};

void bank::OpenAccount()
{	
	static int i = 0;
	cout<<"Opening Account"<<endl;
	cout<<"Enter Account Number"<<endl;
	cin>>account[ i ];
	cout<<"Enter Name"<<endl;
	cin>>name[ i ];
	cout<<"enter balance"<<endl;
	cin>>balance [ i ];
	amount[i]=balance[i];
	i++;
}

void bank::show()
{
	long long int hold;
	int output;
	cout<<"Enter account number for details"<<endl;
	cin>>hold;
	for(int i=0;i<5;i++)
	{
		if(hold == account[ i ])
		{
			output = i;
		}
	}
	cout<<"Account Number = "<<account[output]<<endl;
	cout<<"Account Name = "<<name[output]<<endl;
	cout<<"Account Balance = "<<balance[output]<<endl;
}

void bank::deposit()
{
	long long int hold = 0;
	int output;
	cout<<"Enter the account number for deposite"<<endl;
	cin>>hold;
	for(int i=0;i<5;i++)
	{
		if(hold == account[ i ])
		{
			output = i;
			break;
		}
		break;
	}
	cout<<"Enter the amount For Deposite"<<endl;
	int dep;
	cin>>dep;
	balance[output] = balance[output] + dep;
	cout<<endl;
	cout<<"Available Balance = "<<balance[output]<<endl;
}
void bank::Withdraw()
{
	long long int hold = 0;
	int output;
	cout<<"Enter the account number for Withdraw"<<endl;
	cin>>hold;
	for(int i=0;i<5;i++)
	{
		if(hold == account[ i ])
		{
			output = i;
			break;
		}
		break;
	}
	cout<<"Enter the amount For Withdraw"<<endl;
	int dep;
	cin>>dep;
	balance[output] = balance[output] - dep;
	cout<<endl;
	cout<<"Available Balance = "<<balance[output]<<endl;		
}

int main()
{	
// Do It as menu driven	
	//bank b1;
	b1.OpenAccount();
	b1.OpenAccount();
	b1.show();
	b1.deposit();
	b1.Withdraw();
	b1.show();
	b1.show();
	
	do {
        cout<<"\n\n\n1.Deposit\n2.Withdraw\n3.Balance Enquiry\n4.Exit\n\n";
        int choice;
        cin>>choice;
        bank b1;
        switch(choice)
        {
        case 1:b1.
            break;
        case 2:ob.withdraw();
            break;
        case 3:ob.chkbalance();
            break;
        case 4: exit(1);
        default:cout<<"Invalid Choice!!";
        }
    }while(1);
	
	return 0;
}
