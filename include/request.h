/**
    @file
    @brief Interface for client request
*/
#ifndef REQUEST_H
#define REQUEST_H

#include <iostream>

using namespace std;

/**
    @class Request
    @brief defines a client request
*/
class Request{
    string _method;
    string _path;
    string _key;
    string _value;
public:
    /**
        @brief default public constructor for Request
    */
    Request();

    // /**
    //     @brief public constructor for Request that process string as request
    //     @param request - string for processing request
    // */
    // Request(string request);

    /**
        @brief default public destructor for Request
    */
    ~Request();

    /**
        @brief get method from client Request
        @return string that defines method of Request
    */
    string method();

    /**
        @brief get path from client Request
        @return string that defines path of Request
    */
    string path();
    
    /**
        @brief get specified key in path from client Request
        @return string that defines specified key in path of Request
    */
    string key();
    
    /**
        @brief get specified value in path from client Request
        @return string that defines specified value in path of Request
    */
    string value();

    /**
        @brief setter of method field 
    */
    void set_method(string method);

    /**
        @brief setter of path field
    */
    void set_path(string path);
    
    /**
        @brief setter of key field
    */
    void set_key(string key);
    
    /**
        @brief setter of value field
    */
    void set_value(string value);
    
};

/**
    @brief sets request fields according to the request string 
    @param reqStr - request string
*/
void setRequestFields(Request * request, string reqStr);

#endif //REQUEST_H