#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <math.h>
#include <string>



struct user {
	string user_name;
	string user_num;
	string fullname;
	string birthday;
	string phone;
	string email;
	string job;
	string ID_student;
	string ID_human;
};

struct account {
	string account_name;
	string account_pass;
	int tt_num;
};

struct tinhtrang {
	int tt_num;
	string tt_name;
};

struct Role {
	int cn_num;
	string cn_name;
};

struct user_account_map {

};

struct account_role_map {

};

struct book {
	string ID_book;
	string name;
	string tacgia;
	string namxuatban;
	string nhaxuatban;
	string ngaynhap;
	string tinhtrang;
	string mota;
};

struct {
	
};

#endif 