#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void mainscreen(){
	cout << "************LIBPRO************" << endl;
	cout << " ---MENU FOR USER---" << endl;
	cout << "1. Tim sach." << endl;
	cout << "2. Gui yeu cau muon sach." << endl;  //yeu cau dang nhap
	cout << "3. Hien thi thong bao." << endl;     //yeu cau dang nhap
	cout << "4. Xem thong tin." << endl;          //yeu cau dang nhap
	cout << "5. Doi mat khau." << endl;           //yeu cau dang nhap
}
void signup(){
	string UserInput;
	ofstream signuptxt("SUFile.txt");
	signuptxt << "New user's information: " << endl;
	cout << "Enter your name: "; // Ten
	signuptxt << "Name: "; 
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
	cout << "Enter your ID: ";
	signuptxt << "ID: "; 
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
	cout << "Enter your full name: ";
	signuptxt << "Full name: ";
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
	cout << "Enter your birthday: "; 
	signuptxt << "DOB: ";
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
	cout << "Enter your phone number: ";
	signuptxt << "Phone number: ";
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
	cout << "Enter your email: ";
	signuptxt << "Email: ";
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
	cout << "Enter your current job: ";
	signuptxt << "Job: ";
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
	cout << "Enter your Student ID (for student only): ";
	signuptxt << "Student ID: ";
	getline(cin, UserInput);
	signuptxt << UserInput << endl;
};
int main(){
	cout << "DANG KY TAI KHOAN: " << endl;
	signup();
	system("CLS");
	mainscreen();
	system("pause");
	return 0;
}

