#include <iostream>
#include <string>
using namespace std;

class Laptop {
protected:
    string modelName;
    string serialNumber;
    string color;
    float weight;
    string hostOsType;
    int storageCapacity;

public:
    // Parameterized constructor
    Laptop(const string& model, const string& serial, const string& col, float w, 
           const string& hostOs, int storage)
        : modelName(model), serialNumber(serial), color(col), weight(w),
          hostOsType(hostOs), storageCapacity(storage) {}

    // Getter methods
    string getModelName() const { return modelName; }
    string getSerialNumber() const { return serialNumber; }
    string getColor() const { return color; }
    float getWeight() const { return weight; }
    string getHostOsType() const { return hostOsType; }
    int getStorageCapacity() const { return storageCapacity; }
};

// Example derived class
class HPLaptop : public Laptop {
public:
    HPLaptop(const string& model, const string& serial, const string& col, float w, 
              const string& hostOs, int storage)
        : Laptop(model, serial, col, w, hostOs, storage) {}
};

int main() {
    // Example usage
    HPLaptop hp("Pavilion", "12345", "Silver", 2.3, "Windows", 512);
    cout << "Model: " << hp.getModelName() << endl;
    cout << "Serial: " << hp.getSerialNumber() << endl;
    cout << "Color: " << hp.getColor() << endl;
    cout << "Weight: " << hp.getWeight() << endl;
    cout << "OS Type: " << hp.getHostOsType() << endl;
    cout << "Storage Capacity: " << hp.getStorageCapacity() << "GB" << endl;

    return 0;
}
