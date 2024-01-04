#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Passport {
private:
	string name;
	int age;
	int number;
	string adress;
	bool jenat;
public:
	Passport() {
		Passport::name = "Alex";
		Passport::age = 21;
		Passport::number = 21220112;
		Passport::adress = "Moscow, Red Sqyare, Kreml";
		Passport::jenat = false;
	}
	Passport(string name, int age, int number, string adress, bool jenat) {
		Passport::name = name;
		Passport::age = age;
		Passport::number = number;
		Passport::adress = adress;
		Passport::jenat = jenat;
	}
	void setname(string name) {
		Passport::name = name;
	}
	void setage(int age) {
		Passport::age = age;
	}
	void setnumb(int number) {
		Passport::number = number;
	}
	void setadress(string adress) {
		Passport::adress = adress;
	}
	void setjenat(int jenat) {
		Passport::jenat = jenat;
	}
	void print() {
		cout << "Name: " << Passport::name << endl;
		cout << "Age: " << Passport::age << endl;
		cout << "Number: " << Passport::number << endl;
		cout << "Adress: " << Passport::adress << endl;
		cout << "Wife/Husband: " << Passport::jenat << endl;
	}
	~Passport(){
		cout << "Destructor first ended his work" << endl;
	}
};
class ForeignPassport : public Passport {
private:
	vector<string> visas;
	int numberq;
public:
	ForeignPassport() {
		ForeignPassport::visas = {"Russia", "USA"};
		ForeignPassport::numberq = 1234567890;
	}
	ForeignPassport(string name, int age, int number, string adress, bool jenat, vector<string> visas, int numberq) {
		ForeignPassport::visas = visas;
		ForeignPassport::numberq = numberq;
	}
	void setvisa(string visa) {
		visas.push_back(visa);
	}
	void printforeign() {
		cout << "Foreign passport number: " << ForeignPassport::numberq << endl;
		int kol = ForeignPassport::visas.size();
		for (size_t i = 0; i < kol; i++)
		{
			cout << "Visa: " << ForeignPassport::visas[i] << endl;
		}
	}
	~ForeignPassport() {
		cout << "Destructor second ended his work" << endl;
	}
};