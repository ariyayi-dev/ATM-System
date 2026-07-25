#include <iostream>
using namespace std;
int main () {
    int Pin, Pin1;
    int choice;
    int accountnumber;
    int accountnumbers[3] = {1001, 1002, 1003};
    double balance = 5000;
    double amount;   
    Pin1 = 1386;
    cout << "Enter your Pin: ";
    cin >> Pin;
        if (Pin1 != Pin ) {
            cout << "Incorrect Pin." << endl;
            cout << "Enter your Pin again: ";
            cin >> Pin;
        }
        else {
            if (Pin1 == Pin) {
            cout << "WELCOME:" << endl ;
            cout << "Enter your choice:" << endl;
            cout << "1. Balance:" << endl;
            cout << "2. Withdraw:" << endl;
            cout << "3. Transfer:" << endl;
            cout << "4. Exit:" << endl;
            cin >> choice;
            switch (choice) {
                case 1: {
                    cout << "Your balance:" << balance << endl;
                    break;     
                }
                case 2: {
                    cout << "Enter amount: ";
                    cin >> amount;
                  if (amount <= balance) {
                    cout << "Transaction succesful." << endl ;
                    balance -= amount;
                    cout << "Remaining balance: " << balance << endl;
                  }
                  else {
                    cout << "Insufficient balance." << endl;                   
                  } 
                    break;
                }
                case 3: {
                cout << "Enter amont: ";
                cin >> amount;
                cout << "Enter account numer: ";
                cin >> accountnumber;
                int foundIndex = -1;
                for (int i = 0; i < 3; i++) {
                    if (accountnumbers[i] == accountnumber) {
                        foundIndex = i;
                        break;
                    }
                }
                    if (foundIndex == -1) {
                        cout << "Please enter a valid account." << endl;
                    }
                    else {
                        if (amount <= balance) {
                            balance -= amount;
                            cout << "Remaining balance: " << balance << endl;
                            cout << "Transfer completed successfully." << endl;
                        }
                        else {
                            cout << "Insufficient balance." << endl;
                        }
                
                    }
                break;
                }
                case 4: {
                    cout << "Thank you for using our ATM." << endl;
                    cout << "Please take your card." << endl;
            
                break;
                return 0;
                }
                default: {
                    cout << "Invalid Choice." << endl;
                }
            }    
        }
    }
}