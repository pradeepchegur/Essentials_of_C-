#include<iostream>
#include<string>
using namespace std;

//C++ Interface //contract
class IEmployee {
public:
	virtual void professional() = 0;
};
class IFamilyMember {
public:
	virtual void casualBehaviour() = 0;
	virtual void cranky() = 0;
};

//person fulfills(implements) IEmployee Contract
class Person :public IEmployee,public IFamilyMember {
public:
	void casualBehaviour(){}
	void professional(){}
	void cranky(){}
};

class OfficeContext {
public:
	void Enter(IEmployee* obj){
		obj->professional();
	}
};

class FamilyContext{
public:
	void Enter(IFamilyMember* obj){
		obj->cranky();
		obj->casualBehaviour();
	}
};

int main() {
	Person tom;
	FamilyContext fContext;
	OfficeContext oContext;
	fContext.Enter(&tom);
	oContext.Enter(&tom);

	Person harry;
	fContext.Enter(&harry);
	oContext.Enter(&harry);
}