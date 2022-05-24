#pragma once
#include <string>
#include <vector>
using namespace std;

class Product
{
public:
	int id;
	string name;
	string company;
	int quantity;
	double price;
	int seller_id;
	string category;
	int offer;

public:
	Product() {
		id = 0;
		name = "";
		company = "";
		quantity = 0;
		price = 0;
		seller_id = 0;
		category = "";
		offer = 0;
	}

	Product(System::String^ id, System::String^ name, System::String^ company, System::String^ quantity, System::String^ price, System::String^ seller_id, System::String^ category, System::String^ offer) {
		this->id = stoi(SysToStd(id));
		this->name = SysToStd(name);
		this->company = SysToStd(company);
		this->quantity = stoi(SysToStd(quantity));
		this->price = stod(SysToStd(price));
		this->seller_id = stoi(SysToStd(seller_id));
		this->category = SysToStd(category);
		this->offer = stoi(SysToStd(offer));
	}

	Product(string id, string name, string company, string quantity, string price, string seller_id, string category, string offer, string raters) {
		this->id = stoi(id);
		this->name = name;
		this->company = company;
		this->quantity = stoi(quantity);
		this->price = stod(price);
		this->seller_id = stoi(seller_id);
		this->category = category;
		this->offer = stoi(offer);
	}

	Product(int id, string name, string company, int quantity, double price, int seller_id, string category, int offer) {
		this->id = id;
		this->name = name;
		this->company = company;
		this->quantity = quantity;
		this->price = price;
		this->seller_id = seller_id;
		this->category = category;
		this->offer = offer;
	}
	
	string SysToStd(System::String^ word) {
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(word);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, word->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	
};

