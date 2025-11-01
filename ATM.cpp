#include <iostream>
using namespace std;

int main() {
    int pin = 1234;       // default PIN
    int userPin, choice;
    double balance = 5000.00; // initial balance
    double amount;
    int attempt = 0;
    int maxAttempt = 3;

    cout << "===== Welcome to Simple ATM =====" << endl;

    // PIN validation
    while(attempt < maxAttempt){
    	cout<<"Enter the pin: ";
    	cin>>userPin;
    	if(userPin == pin){
    		cout<<"Valid Pin Entered "<<endl;
    		break;
		}else{
			cout<<"Invalid pin! "<<endl;
			attempt++;
			if(attempt == maxAttempt){
				cout<<"You entered too many time. Your account is temporarily blocked"<<endl;
				return 0;
			}
		}
	}
    while(true){
    	
        cout << "\n===== ATM Menu =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount Deposited Successfully!" << endl;
                    cout << "New Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid Deposit Amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Please Collect Your Cash!" << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Insufficient Balance or Invalid Amount!" << endl;
                }
                break;

            case 4:
                cout << "Thank you for using ATM. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid Choice! Try Again." << endl;
        }
    }

    return 0;
}

