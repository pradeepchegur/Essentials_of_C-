#include<iostream>
#include<string>
using namespace std;

class IEngine {
public:
	virtual	void start() = 0;
	virtual	void stop() = 0;

};

class MPFIEngine:public IEngine{
public:
	void start(){}
	void stop(){}

};

class GDIEngine:public IEngine{
public:
	void start() {}
	void stop() {}
};

class XUV3X0 {
	//Dependency(Abstract)
	IEngine* engine;
public:
	//Constructor Dependency Injection
	XUV3X0(IEngine* engineArg) :engine{ engineArg }{}
	void drive() {
		this->engine->start();
	}
	void halt() {
		this->engine->stop();
	}
	~XUV3X0() {
		delete engine;
	}
};

int main()
{
	MPFIEngine napEngine;
	GDIEngine turboEngine;
	XUV3X0 car{ &napEngine };
	car.drive();
	XUV3X0 turboSeries{ &turboEngine };
	return 0;
}



class StallinEngine {

};

//car uses engine
//car depends on engine