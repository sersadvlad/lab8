#include <director.h>

Director::Director(){
    _id = -1;
    _name = "";
    _sex = "";
    _birth = 0;
}

Director::~Director() {}

Director::Director(int id, string name, string sex, int birth){
    _id = id;
    _name = name;
    _sex = sex;
    _birth = birth;
}

int Director::id(){ return _id; }
string Director::name(){ return _name; }
string Director::sex(){ return _sex; }
int Director::birth(){ return _birth; }

string Director::valueByField(string field){
    if(field == "id") return to_string(_id);
    if(field == "birth") return to_string(_birth);
    if(field == "name") return _name;
    if(field == "sex") return _sex;
    return "NOT FIELD";
}