/**
    @file
    @brief Interface for server response
*/
#ifndef RESPONSE_H
#define RESPONSE_H

#include <request.h>
#include <director.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
    @class Response
    @brief defines a server response
*/
class Response{
    string _message;
public:
    /**
        @brief default public constructor for Response
    */
    Response();

    /**
        @brief public - constructor for Response 
        @param message - response message 
        
    */
   // Response(Request * request, vector<Director*> directors);
   Response(string message);

    /**
        @brief default public destructor for Response
    */
    ~Response();

    /**
        @brief gets message from Response
        @return message that contained in Response
    */
    string message();

};

/**
      @brief processes request and forms message string
      @param request - input request to process
      @param directors - list of directors to choose while processing
      @return message string
    */
    string processRequest(Request * request, vector<Director*> directors);
    
#endif //RESPONSE_H