#include <convert.h>
#include <iostream>
#include <vector>
#include <jansson.h>
#include <time.h>
#include <fstream>
#include <cctype>

#include<cstdlib>
#include<cstring>
#include <string>

using namespace std;

/**
    @brief function to reading file
    @param filePath - path to file that will be read
    @return string that represents content of file
*/
string readFile(string filePath);

string convertServerInfo(void){
    json_t * json = json_object();
    json_object_set_new(json, "title", json_string("Simdre HTTP Server with my favorite film directors"));
    json_object_set_new(json, "developer",json_string( "Sadrytskyj Serhii"));
    //get current time
    time_t seconds = time(0);
    tm* timeinfo = localtime(&seconds);
    //set current time
    string t = string(asctime(timeinfo));
    const char * correct = t.erase(t.length() - 1, t.length()).c_str();
    json_object_set_new(json, "time", json_string(correct));
    char * str = json_dumps(json, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
    string jsonString(str);
    free(str);
    json_decref(json);
    return jsonString;
}

string convertDirectors(vector<Director*> directors){
    json_t * json = json_array();
    for(Director * director : directors){
        json_t * dr = json_object();
        json_object_set_new(dr, "id", json_integer(director->id()));
        json_object_set_new(dr, "name", json_string(director->name().c_str()));
        json_object_set_new(dr, "birth", json_integer(director->birth()));
        json_object_set_new(dr, "sex", json_string(director->sex().c_str()));
        json_array_append(json, dr);
        json_decref(dr);
    }
    char * str = json_dumps(json, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
    string jsonString(str);
    free(str);
    json_decref(json);
    return jsonString;
}

string convertDirectorsByKey(vector<Director*> directors, string key, string value){
    if(directors[0]->valueByField(key) != "NOT FIELD"){
        json_t * json = json_array();
        bool isFound = false;
        for(Director * director : directors){
            if(director->valueByField(key) == value){
                isFound = true;
                json_t * dr = json_object();
                json_object_set_new(dr, "id", json_integer(director->id()));
                json_object_set_new(dr, "name", json_string(director->name().c_str()));
                json_object_set_new(dr, "birth", json_integer(director->birth()));
                json_object_set_new(dr, "sex", json_string(director->sex().c_str()));
                json_array_append(json, dr);
                json_decref(dr);
            } 
        }
        char * str = json_dumps(json, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
        string jsonString(str);
        free(str);
        json_decref(json);
        if(!isFound) return "NOT FOUND";
        return jsonString;
    } else {
        return "NOT FOUND";
    }
    
}

string convertFileInfo(string filePath){
    string fileStr = readFile(filePath.c_str());
    if (fileStr == "NOT FOUND") {
        cerr << "Can't open file" << endl;
        return fileStr;
    }
    json_t * json = json_object();
    json_object_set_new(json, "filename", json_string( "data.txt"));
    json_object_set_new(json, "size(bytes)",json_integer(fileStr.size()));
    json_object_set_new(json, "content",  json_string(fileStr.c_str()));
    char * str = json_dumps(json, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
    string jsonString(str);
    free(str);
    json_decref(json);
    return jsonString;
}

string convertFileContent(string filePath){

    vector<double> numbers;
    int count = 0;
    double greatest = -99999.99;

    double num = 0.0;
    bool secondDot = false; // false if dot is the first
    bool exist = false; //if  numbers exist
    int i = 0;

    string fileStr = readFile(filePath.c_str());
    if (fileStr == "NOT FOUND") {
        cerr << "Can't open file" << endl;
        return fileStr;
    }

// put all numbers from text to vector

// check is there are numbers
    while(fileStr[i]){
        if(isdigit(fileStr[i])){
            exist = true;
        }
        i++;
    }

const char*charArray = fileStr.c_str(); // array of chars

    if(exist == true){
        i = 0;
        while(charArray[i] != '\0'){

                if(isdigit(charArray[i]) || (charArray[i] == '-' && isdigit(charArray[i + 1]))){
                        num = atof(charArray + i); //(fileStr + i)
                        numbers.push_back(num); // adding number

                        //passing by chars of the number
                        while(isdigit(charArray[i + 1]) || (charArray[i + 1] == '.' && secondDot == false)){
                            i++;
                            if(charArray[i] == '.'){
                                secondDot = true;
                            }
                        }
                        i++;
                        secondDot = false;
                }
                else i++;
            }
            // find count and the greatest number
            for(double d:  numbers){
                count++;
                if(greatest < d){
                    greatest = d;
                }
            }
        } else {
            count = 0;
            greatest = -999999.99;
        }

    json_t * json = json_object();
    json_object_set_new(json, "filename", json_string( "data.txt"));
    json_object_set_new(json, "numbers in the file:",json_integer(count));
    json_object_set_new(json, "the greatest number is:",  json_real(greatest));
    char * str = json_dumps(json, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
    string jsonString(str);
    free(str);
    json_decref(json);
    return jsonString;
}


string readFile(string filePath){
    string buf;
    string result = "";
    ifstream myfile (filePath);
    if (!myfile.is_open()){
        return "NOT FOUND";
    }
    while (!myfile.eof()){
        getline(myfile, buf);
        result += buf;
    }
    myfile.close();
    return result;
}