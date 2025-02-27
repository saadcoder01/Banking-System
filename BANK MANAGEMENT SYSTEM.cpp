#include<iostream> // Libaray for input and output
#include<string>  // libaray for string name
using namespace std;

// structure to hold account information

// Declaration of structure
 struct Account{
 	
 	long long accountnumber;
 	string name;
 	float balance;
 	string acc_type;
 	string address;
 	long long  phone;
 	int withdraw=30000;
 	int deposit=30000;
 	
 	// for transaction report
 	int t_with=0;
 	int l_with=0;
 	int t_deposit=0;
 	int l_deposit=0;
};



// Function prototypes

// Parameter outside the main function called Formal Parameter
  
void create_account(Account account[],int count);
void update_account(Account account[],int count);
void account_detail(Account account[],int count);
void withdraw_money(Account account[],int count);
void deposit_money(Account account[],int count);
void balance_inquiry(Account account[],int count);
void delete_account(Account account[],int count);
void transaction_report(Account account[],int count);
void feedback();
void complaints();

// Main Function

int main(){
		int choice;
Account account[100]; // store data of upto hundreds accounts 
int count=5; // total number of accounts
 	
 
 	// account 1
 	account[1].accountnumber=241201054;
 	account[1].name="Hafiz Saadullah";
 	account[1].balance=50000;
 	account[1].acc_type="Current";
 	account[1].address="ABC";
 	account[1].phone=444101054;
 	
 	// account 2
 	account[2].accountnumber=241201049;
 	account[2].name="Muhammad Ahsan";
 	account[2].balance=400000;
 	account[2].acc_type="saving";
 	account[2].address="ABC";
 	account[2].phone=444101049;
 	
 	// account 3
 	account[3].accountnumber=241201013;
 	account[3].name="Zainab Noor";
 	account[3].balance=80000;
 	account[3].acc_type="Current";
 	account[3].address="ABC";
 	account[3].phone=444101013;
 	
 	// account 4
 	account[4].accountnumber=241201023;
 	account[4].name="Zainulhaq";
 	account[4].balance=50000;
 	account[4].acc_type="Saving";
 	account[4].address="ABC";
 	account[4].phone=444101023;
 	

	
do{
	
cout<<	"\n\t\t\t------Welcome To Apna Bank System-------\n" ;
cout<<"\nDear Customer, Please Select The Option Below\n";
cout<<"  1. Create Account\n";
cout<<"  2. Update  Account\n";
cout<<"  3. Account Details\n";
cout<<"  4. Withdraw Money\n";
cout<<"  5. Deposit Money\n";
cout<<"  6. Balance Inquiry\n";
cout<<"  7. Delete Account\n";
cout<<"  8. Transaction Report\n";
cout<<"  9. Feedback\n";
cout<<"  10.For Further Compailents\n";
cout<<"  0. Exit\n";
cout<<"\nEnter Your Choice: ";
cin>>choice;

  // function calling by case and function name

switch(choice){
	
	// Parameter inside the main function called Actual Parameter
	
	case 1:
		 create_account(account, count);
	break;
		case 2:
		 update_account(account, count);
	break;
		case 3:
		 account_detail(account,  count);
	break;
		case 4:
	 withdraw_money(account, count);
	break;
		case 5:
	 deposit_money(account, count);
	break;
		case 6:
		 balance_inquiry(account, count);
	break;
	    case 7:
	     delete_account(account , count);
	break;
		case 8:
     transaction_report(account, count);
	break;
		case 9:
		
	feedback();
	break;
		case 10:
		complaints();
	break;
		case 0:
		cout<< "\nThe Program Will Exit.ThankYou! For Your Services.";
	break;
	
	default:
	cout<<"\nDear Customer, You Enter Invalid Number.\n Please! Try Again. ";
}

} 
while(choice!=0);

return 0;
}
  
  // Function Defination
  
  // Create account function

void create_account(Account account[],int count){
	
	cout<<"\nPlease Provide Us With Following Details\n";
	for(int i=0; i<=0; i++){
	
	
	cout<<"\nEnter Your Name: ";
	cin>>account[i].name;
	
	long long int ph;
	cout<<"\nEnter Your Phone Number: ";
	cin>>account[i].phone;
	
	char acc_type;
	cout<<"\nEnter Your Account Type (saving [s]/current[c]):";
	cin>>account[i].acc_type;
	
	
    cout<<"\nEnter Your Address/City: ";
    cin>> account[i].address;
    
    cout<<"\nEnter Your CNIC Number: ";
    cin>>account[i].accountnumber;
    
    account[i].balance=0;
    cout<<"\nYour Balance is "<<account[i].balance<<"\n";
    cout<<"\nYour account number is "<<account[i].accountnumber;
    cout<<"\n\n Congratulatons! Your Account Has Been Created & Verified.\n ThankYou! For Being Part Of Apna Bank System.\n";
}

}

  // Update account details function

void update_account(Account account[],int count){
    long long accno;
	int n;
	cout<<"Enter your account number: ";
	cin>>accno;
	for(int i=0; i<count;i++){
	if(account[i].accountnumber==accno){
	

cout<<"\n1. Name";
cout<<"\n2. Account type";
cout<<"\n3. Address";	
cout<<"\n4. phone";
cout<<"\nWhat information do you want to update: ";
cin>>n;

switch(n){
	case 1:
		cout<<"\nEnter your new name: ";
		cin>>account[i].name;
		cout<<"\nYour new name has been updated succesfully!\n";
		break;
		
	case 2:
		cout<<"\nEnter your new Account type: ";
		cin>>account[i].acc_type;
		cout<<"\nYour new account type has been updated succesfully!\n";
		break;
		
	case 3:
		cout<<"\nEnter your new Address: ";
		cin>>account[i].address;
		cout<<"\nYour new address has been updated succesfully!\n";
		break;
		
	case 4:
		cout<<"\nEnter your new Phone number: ";
		cin>>account[i].phone;
		cout<<"\nYour new phonenumber has been updated succesfully!\n";
		break;
		
	default: 
		cout<<"\nDear Customer You enter Wrong Number\n";
		
	}
	return;
}

}	
	cout<<"\nAccount! Does not found \n";
}

 // Account details function

void account_detail(Account account[],int count){
	long long acc;
	cout<<"\nEnter Your Account Number: ";
	cin>>acc;
	for(int i=0; i<count;i++){
	
	if (account[i].accountnumber==acc)
{
		cout<<"\n Your Account Number is "<<account[i].accountnumber;
			cout<<"\n Name: "<<account[i].name;
			
				cout<<"\n Balance: "<<account[i].balance;
				
					cout<<"\n Account type: "<<account[i].acc_type;
					  cout<<"\n Address: "<<account[i].address;
					  
					    cout<<"\n Phone Number: "<<account[i].phone<<endl;
	      return;			
	}
	

}
cout<<"\n Account Doesnot Found!\n ";
}

  // Delete account function
  
void delete_account(Account account[], int count){
	long long  acc;
	cout<<"Enter Your Account Number: ";
	cin>>acc;
	for(int i=0;i<=count;i++){
	
	if(account[i].accountnumber==acc){
		account[i].accountnumber=0;
		account[i].name="0";
		account[i].phone=0;
		account[i].address="0";
		account[i].balance=0;
		account[i].acc_type='0';
		cout<<"\n Account Deleted Successfully! \n";
	return;
	}
}
cout<<"Account Does Not Found\n";
}

  // Transection report function

void transaction_report(Account account[],int count){
	long long acc;
	cout<<"\nEnter Your Account Number:";
	cin>>acc;
	
	cout<<"\nDear customer! Your Transaction is as fellow:\n";
	
	//transaction report for withdrawal
	for(int i=0;i<count;i++){
		if(account[i].accountnumber==acc){
			
			cout<<"\nYour Total withdrawal is: "<<account[i].t_with;
			
			cout<<"\nYour last Withdrawal is: "<<account[i].l_with;
			
			
		}
		
	}
	
	
	// transaction report for deposit
		for(int i=0;i<count;i++){
		if(account[i].accountnumber==acc){
			
			cout<<"\nYour Total Deposit is: "<<account[i].t_deposit;
			
			cout<<"\nYour last Deposit is: "<<account[i].l_deposit;
			
			cout<<"\n";
				return;
		}
	
	}
	
	cout<<"\n Account doesnot found!\n";
	
}

  // feedback function

void feedback(){
	
	// feedback from user
	
	int n;

	cout<<"\n 1.The System is User-friendly.";
	cout<<"\n 2.Easy To Navigate.";
	cout<<"\n 3.Transactions Are Processed Quickly & Efficiently.";
	cout<<"\n 4.All Necessary Banking Features Are Available.";
	cout<<"\n 5.New Features OR Updates Are Needed.";
	cout<<"\n 6.Personal & Financial Data is Safe.\n";
		cout<<"\n Please! Give us Your Feedback: ";
	cin>>n;
	cout<<"\n ThankYou! For Your Feedback.\nWe have Received Feedback & Are Working To Improve Our System.";
}

 // complaints function

void complaints(){
	
	cout<<"\nFor Further Complaints & Issue Please! Contact us At These Number Below:\n";
	cout<<"1.444-567-987\n";
	cout<<"2.444-567-999\n";
	cout<<"3.444-567-986\n";
	cout<<"\n\t\t Email us at Apnabank.123@gmail.com";
	cout<<"\n\t\t Follow us on\n\t\tapna_bank.instagram.com \n\t\tapna_bank123.facebook.com";
	
	cout<<"\n\n\t\t Download Our Mobile App on Playstore\n";
	
}

  // Cash Withdraw function

void withdraw_money(Account account[],int count){ 
    
    long long acc;
	int amt;
	cout<<"\n Enter your Account Number: ";
	cin>>acc;
	for(int i=0; i<count;i++){
	
	if (account[i].accountnumber==acc)
{
	cout<<"\n Your Account Number is "<<account[i].accountnumber;
	cout<<"\n Your Account Balance is "<<account[i].balance;
	cout<<"\n Your Daily With-draw Transaction Limit is: "<<account[i].withdraw;
	cout<<"\n\n Enter The Amount You Want To WithDraw: ";
	cin>>amt;
     if(account[i].balance<amt){
     	cout<<"\n You Have Insufficent Balance.Please! Try Again.\n";}
    else{
	
	  if(amt>account[i].withdraw){
	 	cout<<"\n You Have Reached Your Daily Limit.";}
	 else{
	 
	account[i].balance -= amt; 
	
	cout<<"\n Your Remaining Balance is: "<<account[i].balance;
	
	account[i].withdraw-=amt;
	
	account[i].t_with+=amt;
	account[i].l_with=amt;
	
	cout<<"\n Your Daily Transection Limit is: "<<account[i].withdraw<<"\n";
}}
return;
   }
   
}

cout<<"\n Account Doesnot Found! \n";
}

  // Deposit money function

void deposit_money(Account account[],int count){
	
	long long  acc;
	int amt;
	cout<<"\n Enter Your Account Number: ";
	cin>>acc;
	for(int i=0; i<count;i++){
	
	if (account[i].accountnumber==acc)
{
	cout<<"\n Your Account Number is "<<account[i].accountnumber;
	cout<<"\n Your Account Balance is "<<account[i].balance;
	cout<<"\n Your Daily Transection Limit is: "<<account[i].deposit;
	cout<<"\n\n Enter The Amount You Want To Deposit: ";
	cin>>amt;

	if(amt>account[i].deposit){
	 	cout<<"\n You Have Reached Your Daily Limit.";
	
	 }
	 else{
	 
	account[i].balance += amt; 
	
	cout<<"\n Your New Balance is: "<<account[i].balance;
	
	account[i].deposit-=amt;
	
	account[i].t_deposit+=amt;
	account[i].l_deposit=amt;
	
	cout<<"\n Your Daily Transection Limit is: "<<account[i].deposit<<"\n";
}
   return;
}

}
cout<<"\n Account Doesnot Found! \n";
}

  // Check balance function
 
void balance_inquiry(Account account[],int count){

		long long acc;
	cout<<"\nEnter Your Account Number: ";
	cin>>acc;
	for(int i=0; i<count;i++){
	
	if (account[i].accountnumber==acc)
{
	cout<<"\n Name: "<<account[i].name;
	cout<<"\n Your Account Balance is "<<account[i].balance<<"\n";

return;	
}

}
cout<<"\n Account does not found! \n";
	
}
