#include <response.h>
#include <convert.h>

Response::Response(){ _message = ""; }
Response::~Response(){};
Response::Response(string message){ 
    _message = message;
}

string Response::message(){ return _message; }

string processRequest(Request * request, vector<Director*> directors){
    
    string file = "/home/sersadvlad/localrepo/progbase2/labs/lab8/data/data.txt";
    string headers = 
        "Server: MyServer\r\n" 
        "Connection: close\r\n\r\n";
    string status = "";
    string content = "";
    string contentInfo = "";

    if(request->method() == "GET"){

        if(request->path() == "/") content = ServerInfo_toJson();
        else if(request->path() == "/favorites") content = DirectorsList_toJson(directors);
        else if(request->path().find("/favorites?") != string::npos ||
                request->path().find("/favorites/") != string::npos) {
            content = DirectorsByKey_toJson(directors, request->key(), request->value());  

        }
         else if(request->path() == "/file") content = FileInfo_toJson(file);
         else if(request->path() == "/file/data") content = getFileContent(file);
         else {
            content = "NOT FOUND";
         }

        if(content != "NOT FOUND"){
            status = "HTTP/1.1 200 OK\r\n";
            contentInfo = "Content-Type: application/json; charset=utf-8\r\n"
                          "Content-Length: " + to_string(content.length()) + "\r\n";
        } else {
            status = "HTTP/1.1 404 NOT FOUND\r\n";
            contentInfo = "Content-Type: text; charset=utf-8\r\n"
                          "Content-Length: " + to_string(content.length()) + "\r\n";
        }

    } else {
        status = "HTTP/1.1 400 Bad Request\r\n";
    }
    string messageStr = status + contentInfo + headers + content;

    return messageStr;
}
