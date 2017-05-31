/**
    @file
    @brief Module to convert data to Json string
*/
#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <vector>
#include <director.h>

using namespace std;

/**
    @brief get server information
    @return string in Json format that contain information about server
*/
string convertServerInfo(void);

/**
    @brief get all Directors in Json fromat
    @param Directors - vector of Directors to convert in Json
    @return string in Json format that contain information about all Directors
*/
string convertDirectors(vector<Director*> directors);

/**
    @brief get Directors that specified filed equals specified value
    @param Directors - vector of Directors to filter and convert in Json 
    @param key - field on which to filter Directors
    @param value - content of field to filter Directors
    @return string in Json format that contain information about server
*/
string convertDirectorsByKey(vector<Director*> directors, string key, string value);

/**
    @brief get information about file
    @param filePath - path to file
    @return string in Json format that contain information about file
*/
string convertFileInfo(string filePath);

/**
    @brief get information about file content
    @param filePath - path to file
    @return string in Json format that contain information about file content
*/
string convertFileContent(string filePath);

#endif //CONVERT_H