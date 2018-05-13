#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <string>

using namespace std;

int main(){
	//rand() % 100 + 1; 
	srand (time(NULL));
	int number = rand() % 10 + 1;
	int user;
	int guess = 4;
	string a1 = "(_)";
	string a2 = "(_)\n| |";
	string a3 = "(_)\n| |\n |";
	string a4 = "(_)\n| |\n |\n| |";
		
	cout<<number<<endl;
	cout<<"Enter your guess: "<<endl;
	cin>>user;
	
	while(guess != 0){
		if (number == user){
			cout<<"You got it!"<<endl;
			return 0;
		}
		else{
			cout<<"Try again!"<<endl;
			guess--;
			cin>>user;
		}
		if (guess == 3){
			cout<<a1<<endl;
		}
		if (guess == 2){
			cout<<a2<<endl;
		}
		if (guess == 1){
			cout<<a3<<endl;
		}
		if (guess == 0){
			cout<<a4<<endl;
			cout<<"You lost"<<endl;
			return 0;
		}
	}

}

