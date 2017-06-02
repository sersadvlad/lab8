#include <request.h>
#include <iostream>
#include <cctype>

using namespace std;

Request::Request(){
    _method = "";
    _path = "";
    _key = "";
    _value = "";
}

Request::~Request(){}

string Request::method() { return _method; }
string Request::path(){ return _path; }
string Request::key(){ return _key; }
string Request::value(){ return _value; }
 
void Request::set_method(string method){ _method = method; } 
void Request::set_path(string path){ _path = path; } 
void Request::set_key(string key){ _key = key; } 
void Request::set_value(string value){ _value = value; } 


void setRequestFields(Request * request, string reqStr){

    //finding method
    size_t endMethod = reqStr.find(" ");
    request->set_method(string(reqStr, 0, endMethod));

    //finding path
    size_t endPath = reqStr.find(" HTTP/1.");
    string path = string(reqStr, endMethod + 1, endPath - endMethod - 1);
    request->set_path(path);

    //parsing path
    size_t quest = path.find("?");
    size_t equal = path.find("=");
    if(quest != string::npos && equal != string::npos){
        request->set_key(string(path, quest + 1, equal - quest - 1));
        request->set_value(string(path, equal + 1, path.length() - equal));
    } else {
        size_t slash = path.find("/", 1);
        request->set_key("id");
        request->set_value(string(path, slash + 1, path.length() - slash));
    }
}
