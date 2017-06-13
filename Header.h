#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <math.h>
#include <string>



struct user {
	char user_name[50];
	char user_num[30];
	char fullname[50];
	char birthday[11];
	char phone[11];
	char email[100];
	char job[30];
	char ID_student[7];
	char ID_human[11];
};

struct account {
	char account_name[50];
	char account_pass[30];
	int tt_num;
};

struct tinhtrang {
	int tt_num;
	char tt_name[10];
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