#include <response.h>
#include <convert.h>

Response::Response(){ 
    _status = "";
    _content = "";
    _headers = "";
    _contentInfo = ""; 
 }

Response::~Response(){};

Response::Response(string status, string content, string headers, string contInfo){
    _status = status;
    _content = content;
    _headers = headers;
    _contentInfo = contInfo;
}

string Response::ToString(){
    return _status + _contentInfo + _headers + _content;
}

void Response::set_content(string content){
    _content = content;
}
void Response::set_status(string status){
    _status = status;
}
void Response::set_headers(string headers){
    _headers = headers;
}
void Response::set_contentInfo(string contentInfo){
    _contentInfo = contentInfo;
}

string Response::get_content(){
    return _content;
}

void RequestToResponse(Request * request, Response * response, vector<Director*> directors){
    
    string file = "/home/sersadvlad/localrepo/progbase2/labs/lab8/data/data.txt";
    response->set_headers("Server: MyServer\r\n" 
        "Connection: close\r\n\r\n") ;

    if(request->method() == "GET"){

        if(request->path() == "/") response->set_content(ServerInfo_toJson());
        else if(request->path() == "/favorites") response->set_content(DirectorsList_toJson(directors));
        else if(request->path().find("/favorites?") != string::npos ||
                request->path().find("/favorites/") != string::npos) {
            response->set_content(DirectorsByKey_toJson(directors, request->key(), request->value())); 
        }
         else if(request->path() == "/file") response->set_content(FileInfo_toJson(file));
         else if(request->path() == "/file/data")response->set_content(getFileContent(file));
         else {
            response->set_content("NOT FOUND");
         }
        if(response->get_content() != "NOT FOUND"){
            response->set_status ("HTTP/1.1 200 OK\r\n");
            response->set_contentInfo("Content-Type: application/json; charset=utf-8\r\n"
                          "Content-Length: " + to_string(response->get_content().length()) + "\r\n");
        } else {
            response->set_status("HTTP/1.1 404 NOT FOUND\r\n");
            response->set_contentInfo("Content-Type: text; charset=utf-8\r\n"
                          "Content-Length: " + to_string(response->get_content().length()) + "\r\n");
        }

    } else {
        response->set_status("HTTP/1.1 400 Bad Request\r\n");
    }
}
