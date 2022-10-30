#include <iostream>
#include <format>
#include <map>
using namespace std;

struct BigThing {
    std::string v_;
    BigThing(const char* v) : v_(v) {
        cout << std::format("BigThing constructed {}\n", v_);
    }
};

using Mymap = map<string, BigThing>;
void printm(Mymap&);

int main() {
    Mymap m;
    m.emplace("Miles", "Trumpet");
    m.emplace("Hendrix", "Guitar");
    m.emplace("Krupa", "Drums");
    m.emplace("Zappa", "Guitar");
    m.emplace("Liszt", "Piano");
    printm(m);

    //Example distinction between .emplace(key, value) and .try_emplace(k,v)
    //Will not add if key is already there
    //Does not update if key exists
    cout << "emplace(Hendrix)\n";
    m.emplace("Hendrix", "Singer");
    cout << "try_emplace(Zappa)\n";
    m.try_emplace("Zappa", "Composer");
    printm(m);

    //Update the key's value, conditionally, if the key already exists
    const char* key{ "Zappa" };
    const char* payload{ "Composer" };
    if (auto [it, success] = m.try_emplace(key, payload);
        !success) {
        cout << "update\n";
        it->second = payload;
    }
    printm(m);

    cin.get();
}

void printm(Mymap& m) {
    for (auto& [k, v] : m) {
        cout << format("[{}:{}] ", k, v.v_);
    }
    cout << "\n";
}