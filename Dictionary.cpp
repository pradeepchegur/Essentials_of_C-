/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename K,typename V>
class KeyValuePair {
    public:
    K key;
    V value;
};

template<typename K,typename V>
class Dictionary {
    vector<KeyValuePair<K,V>> KeyValuePairs;
    public:
        void add(K key,V value){

        }

        V operator[](K key){

        }
};

int main(){
    Dictionary <string,string> stringMap;
    stringMap.add("BLR","Bengaluru");
    stringMap.add("CHN","Chennai");
    string value=stringMap["BLR"];
    cout<<value<<endl;

    Dictionary <string,int> stringToIntMap;
    stringToIntMap.add("One",1);
    stringToIntMap.add("Two",2);
    int number=stringToIntMap["One"];
    cout<<number<<endl;
    
    return 0;
}
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename K, typename V>
class KeyValuePair {
public:
    K key;
    V value;
};

template<typename K, typename V>
class Dictionary {
    vector<KeyValuePair<K, V>> KeyValuePairs;
public:
    void add(K key, V value) {
        KeyValuePair<K,V> pair;
        pair.key=key;
        pair.value=value;
        KeyValuePairs.push_back(pair);
    }

    V& operator[](K key) {
        for (auto& pair : KeyValuePairs) {
            if (pair.key == key) {
                return pair.value;
            }
        }
        V defaultValue{};
        KeyValuePairs.push_back({key, defaultValue});
        return KeyValuePairs.back().value;
    }
};

int main() {
    Dictionary<string, string> stringMap;
    stringMap.add("BLR", "Bengaluru");
    stringMap.add("CHN", "Chennai");
    string value = stringMap["CHN"];
    cout << value << endl;

    Dictionary<string, int> stringToIntMap;
    stringToIntMap.add("One", 1);
    stringToIntMap.add("Two", 2);
    int number = stringToIntMap["Two"];
    cout << number << endl;

    return 0;
}
