#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Product.h";
using namespace std;

class User
{
public:
	int id;
	string name;
	string email;
	string phone;
	string password;
	bool is_seller;

	User() {
		this->id = -1;
		this->name = "";
		this->email = "";
		this->is_seller = 0;
		this->phone = "";
		this->password = "";
	}
	
};

