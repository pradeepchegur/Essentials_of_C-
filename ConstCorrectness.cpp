#include <iostream>
#include <string>
using namespace std;

void f3(string &arg){    //locator value reference or l-value reference
    arg="hello ref";
}
/*void f2(const string *arg){               //cant change arguement but can change string
    //*arg="hello";
    string temp="pointer can be modified";
    arg=&temp;
}*/
/*void f2(string* const arg){               //cant change string but can change aruguement
    *arg="hello";
    //string temp="pointer can be modified";
    //arg=&temp;
}*/
void f2(const string* const arg){              //cant chnage both pointer and arguement->only read
    //*arg="hello";
    //string temp="pointer can be modified";
    //arg=&temp;
}
void f1(string arg){
    arg="hello";
}

int main(){
    string data="h1";
    f1(data);
    cout<<data<<endl;
    f2(&data);
    cout<<data<<endl;
    f3(data);
    cout<<data<<endl;

    return 0;
}