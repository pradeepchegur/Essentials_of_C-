#include <iostream>
#include <string>
using namespace std;

//death relationship b/w smartPtr and rawPtr
class A{
    public:
        A(){
            cout<<"A instantiated"<<endl;
        }
        ~A(){
            cout<<"A Destructed"<<endl;
        }
        void operation(){
            cout<<"A operation is called"<<endl;
        }
};

template<typename T>
class SmartPointerOfTypeA{
    T *ptr; //smartpointer always has a raw pointer
    public:
        SmartPointerOfTypeA(T* ptrRef):ptr{ptrRef}{}

        ~SmartPointerOfTypeA(){  //delete raw pointer
            delete ptr;
        }
        T* operator->(){   //overloading indirection operator
            return ptr;
        }
};

void instantiate(){
    SmartPointerOfTypeA<A> smartPtr {new A()};
    smartPtr->operation();
    //A *ptr=new A();
    //A obj;
    //A *ptr=&obj;
    //std::unique_ptr<A> newSmartPtr = std::make_unique<A>();
    //newSmartPtr->operation();
}

int main(){
    instantiate();
    return 0;
}