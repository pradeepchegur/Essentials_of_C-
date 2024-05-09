#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    private:
    string regNumber;
    string name;

    public:
    virtual void start()
    {
        cout<<"key start"<<endl;
    }
     virtual void stop()
    {
        cout<<"key stop"<<endl;
    }
    virtual void drive()=0;
};

class Car:public Vehicle{
    public:
    void stop() override {cout<<"Push button stop"<<endl;}
    void start() override {cout<<"Push button start"<<endl;}
    void drive(){cout<<"Car drive"<<endl;}
};

class Truck:public Vehicle{
        public:
    void drive(){cout<<"Truck drive"<<endl;}
};

class VehicleSimulator{
    Vehicle *v;
    public:
    VehicleSimulator(Vehicle *vArg): v{vArg}{}
    void start(){v->start();}
    void stop(){v->stop();}
    void drive(){v->drive();}
};

int main()
{
    Car myCar;
    Truck myTruck;

    VehicleSimulator carSimulator(&myCar);
    VehicleSimulator truckSimulator(&myTruck);

    carSimulator.start();  
    carSimulator.drive();  
    carSimulator.stop();   

    truckSimulator.start();  
    truckSimulator.drive();  
    truckSimulator.stop();   

    return 0;
}
