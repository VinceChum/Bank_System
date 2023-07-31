#include <iostream>
# include <conio.h>
using namespace std;

int main(){
			int pin=0, codepin=1234, choice=0, bal=0, withdraw=0, deposit=0, newpin=0, lim=3;
			char depositchoice, newpasschoice, exitchoice;
cout << "$$$$$$$$$$$$$$$$ Welcome to Bank O $$$$$$$$$$$$$$$$";
cout << "\n\n Enter Your Pin" << ": "; cin >> pin;
system ("cls");
pinstart:
if (pin==codepin){
				  cout << "Your Pin Confirmed!";
menu:        
			      cout << "\n_____________________________________________________";
			      cout << "\n|Welcome to Our Service.                            |";
			      cout << "\n|[1] Check Balance                                  |";
			      cout << "\n|[2] Withdraw                                       |";
			      cout << "\n|[3] Deposit                                        |";
			      cout << "\n|[4] Change Pin                                     |";
			      cout << "\n|[5] Log Out                                        |";
			      cout << "\n____________________________________________________| ";
			      cout << "\n\n";
	
	cout << " Choose any of the transaction"; cin >> choice;		      
int balance=1, withdraw=2, deposit=3, changepin=4, exit=5;

if(choice==1){
			  system ("cls");
			  cout << "\nYour Current Balance is: \n" << bal;
			  if (bal<=100){
				    cout << "Do you want to deposit? [Y/N]"; cin >> depositchoice;
								  if (depositchoice=='Y'){
								  cout << " Input amount that you want to deposit :"; cin >> deposit;
 								  cout << "You deposit a total of "<< deposit << "of amount";
 								  bal=bal+deposit;
								  						 }
								  else {
								  goto menu;
								  	   }   
								      }
			  goto menu;
			}
else if (choice==2){
					system ("cls");
					cout << "Input the amount you want to withdraw :"; cin >> withdraw;
					if (withdraw<10000&&withdraw>100){
					cout << "The amount you withdraw is " << withdraw;
					bal-=withdraw;					
					goto menu;
									   				 }
					else if (withdraw>bal){
					cout << "\nInsufficient Balance!";
					goto menu;
										  }
					else if (withdraw<0){
					cout << "Invalid Transaction!";
					goto menu;
										}
					else if (withdraw>10000){
					cout << " You've already reached maximum quota!";
					goto menu;
											}
					else {
					cout << "Invalid withdraw transaction!";
					goto menu;
						 }
				   }
else if (choice==3){
				    system ("cls");
				    cout << " Input amount that you want to deposit :\n"; cin >> deposit;
				    if (deposit>0){
				    cout << " You Deposit " << deposit << " in total\n";
				    bal=bal+deposit;
				    goto menu;	 
								  }
					else if (deposit<500){
					cout << "Deposit minimum amount is 500";
					goto menu;
										 }
					else if (deposit<0){
					cout << "Invalid Deposit Transaction";
					goto menu;
									   }
                    else {
                    cout << "Invalid Deposit Transaction";
					goto menu;
						 }
				   }
else if (choice==4){
					system ("cls");
					cout << "Input New PIN!"; cin >> newpin;
					if (newpin>1000&&newpin<9999){
					cout << "You've changed your pin successfully!";
					goto menu;
												 }
					else if (newpin==pin){
					cout << "Your Password is the same as your old Password!";
					goto menu;
										 }	
				    else {
				    cout << "Your Pin must be four numbers!\n";
				    cout << "Do you want to change your password again? [Y/N]"; cin >> newpasschoice;
						 if (newpasschoice=='Y'){
                         cout << "Input New PIN!"; cin >> newpin;
												 if (newpin<1000&&newpin<9999){
												 cout << "You've changed your pin successfully!";
												 goto menu;	                                      }
					    						}
					     else {
					     goto menu;	
						      }
				        }

					}
else if (choice==5){
					system ("cls");
					cout << "Are You Sure You Want to Log Out? [Y/N]"; cin >> exitchoice;
					if (exitchoice=='Y'){
					cout << "THANK YOU!";
					return 0;
										}
					else if (exitchoice=='N'){
					goto menu;
					}
				   }
				 }
else if (pin!=1234){
				lim--;
   				cout << "\nYour Pin is Invalid!\n"<<"Your remaining attempts"<< lim << "\nPlease try again.";
				goto pinstart;
				}
else if (lim==0){
				 cout << "\nYou're account has been locked!";
				}
		  }




