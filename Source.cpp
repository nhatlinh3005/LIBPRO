#include <iostream>
#include <fstream>
#include<string>

using namespace std;
void main() {
	ifstream file;// lay du lieu file
	file.open("Text.txt");
	string sv;
	
	while (file.eof() == false)
	{
		getline(file, sv, ';'); // lay du lieu sau dau ";"
		cout << sv << endl;
	}
	file.close();

	ofstream file1("Text.txt");// them vào file
	file1 << "Nhat Linh1";
	file1.close();
	system("pause");
}