#include<iostream>
#include<string>
using namespace std;

class LocationModel {
private:
    string name;
    float coOrdinate;

public:
    //string getName(LocationModel* this){  //should be read like this...
    string getName() {
        return this->name;

    }
    //void setName(LocationModel* this, string value){
    void setName(string value) {
        //name=value;
        this->name = value;
    }
};

class LocationCSVDataReader {
private:
    string filePath;
};

int main_() {
    //stack objects/allocation
    LocationModel obj;
    obj.setName("BLR"); //LocationModel::setName(&obj,"BLR")
    string name = obj.getName();
    cout << name << endl;
    //Heap allocation
    LocationModel* ptr = new LocationModel();
    ptr->setName("DEL");
    name = ptr->getName();
    cout << name << endl;

    return 0;
}
