#include <iostream>
#include <vector>
#include<string>

#include<progbase-cpp/net.h>

#include <request.h>
#include <response.h>
#include <director.h>

using namespace std;
using namespace progbase::net;

#define BUFFER_LENGTH 10000

void deleteDirectors(vector<Director*> directors);
void addDefaultDirectors(vector<Director*> &directors);

int main(void){
    vector <Director*> directors;
    addDefaultDirectors(directors);

	const int serverPort = 8080;
    TcpListener listener;
    NetMessage message(BUFFER_LENGTH);
    try {
        listener.bind(IpAddress("127.0.0.1", serverPort));
        listener.start();
        while (true) {
            cout << ">> Waiting for clients at " << serverPort << "..." << endl;
            TcpClient * client = listener.accept();
            client->receive(message);
            cout << ">> Received: " << endl << message.dataAsString() << endl;
           // Request * req = new Request(message.dataAsString());
           Request * req = new Request();
           setRequestFields(req, message.dataAsString());

            //Response * res = new Response(req, directors);
            Response * res = new Response(processRequest(req, directors));

            message.setDataString(res->message());
            client->send(message);
            cout << ">> Response sent." << endl;
            delete client;
            delete req;
            delete res;
        }
    } catch(NetException const & exc) {
        cerr << exc.what() << endl;
    }
    deleteDirectors(directors);
    return 0;
}

void addDefaultDirectors(vector<Director*> &directors){
    directors.push_back(new Director(108, "Christopher Nolan", "male", 1970));
    directors.push_back(new Director(372, "Ben Stiller", "male", 1965));
    directors.push_back(new Director(45, "Stephen Spielberg", "male", 1946));
    directors.push_back(new Director(920, "George Lukas", "male", 1967));
    directors.push_back(new Director(578, "Quentin Tarantino", "male",1963));
    directors.push_back(new Director(205, "Damien Chazellle", "male", 1985));
}

void deleteDirectors(vector<Director*> directors){
    for(Director *Director : directors){
        delete Director;
    } 
}

