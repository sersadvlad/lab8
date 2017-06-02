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
    //string _message;
    string _status;
    string _content;
    string _contentInfo;
    string _headers;
public:
    /**
        @brief default public constructor for Response
    */
    Response();

    /**
        @brief public - constructor for Response 
        @param fields - parts of response message
        
    */
    Response(string status, string content, string headers, string contInfo);

    /**
        @brief default public destructor for Response
    */
    ~Response();

    /**
        @brief gets message from Response
        @return message that contained in Response
    */
    string message();
    

    /**
        @brief setter of content field
    */
    void set_content(string content);

    /**
        @brief setter of status field
    */
    void set_status(string status);

    /**
        @brief setter of headers field
    */
    void set_headers(string headers);

    /**
        @brief setter of contentInfo field
    */
    void set_contentInfo(string contentInfo);


    /**
        @brief get content string
    */
    string get_content();

    /**
        @brief creates string message;
        @return string message
    */
    string ToString();
};

 /**
      @brief processes request 
      @param request - input request to process
      @param directors - list of directors to choose while processing
      @return message string
    */
    void RequestToResponse(Request * request, Response * response, vector<Director*> directors);

    
#endif //RESPONSE_H