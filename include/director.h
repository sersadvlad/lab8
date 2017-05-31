/**
    @file
    @brief Data about favorite film directors
*/
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <iostream>

using namespace std;

/**
    @class Director
    @brief defines a favorite director
*/
class Director{
    int _id;
    string _name;
    string _sex;
    int _birth;
public:
    /**
        @brief default public constructor for Director
    */
    Director();

    /**
        @brief default public destructor for Director
    */
    ~Director();

    /**
        @brief public constructor for Director that fill all fields in it
        @param id - unique number of Director
        @param name - name of Director
        @param sex - sex of the Director
        @param birth - birth year of Director
    */
    Director(int id, string name, string sex, int birth);

    /**
        @brief get id of Director
        @return string that represented unique number of Director
    */
    int id();

    /**
        @brief get name of Director
        @return string that represented name of Director
    */
    string name();

    /**
        @brief get sex of Director
        @return string that represents sex of Director
    */
    string sex();

    /**
        @brief get year of birth of Director
        @return string that represents year of birth of Director
    */
    int birth();

    /**
        @brief get value that contains specified field of Director
        @param field - string that defines field which value returns
        @return string that represents value at specified field
    */
    string valueByField(string field);
};

#endif //DIRECTOR_H