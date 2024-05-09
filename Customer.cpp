#include<iostream>
#include<string>
using namespace std;

class Customer {
private:
	string name, address, pan, adhar, emailId, contactNumber;

public:
	Customer(string nameArg,
		string addressArg, 
		string panArg, 
		string adharArg
	) :name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }{

	}
	
	void setContactNumber(string contactNumberArg) {
		this->contactNumber = contactNumberArg;
	}

	void setEmailAddress(string emailArg) {
		this->emailId = emailArg;
	}
};

class CustomerBuilder {
public:
	CustomerBuilder(string name, string address, string pan, string adhar) {

	}
};

int main() {
	Customer customerObj1{ "Tom","BLR","DYHJK","122345678" };
	return 0;
}