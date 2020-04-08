//
// Created by Mickael Eriksson on 2020-04-08.
//

#include <fstream>
#include <iostream>
#include "datafile.h"
using namespace std;
datafile::datafile(void) {
    cout << "Object is being created" << endl;
}

unique_ptr<std::fstream> datafile::createFile(std::string &query) {
    char filename[query.size()+1];
    strcpy(filename,query.c_str());
    unique_ptr<basic_fstream<char, char_traits<char>>> appendFileToWorkWith;

    appendFileToWorkWith -> open(filename, std::fstream::in | std::fstream::out | std::fstream::app);


    // If file does not exist, Create new file
    if (!appendFileToWorkWith -> is_open()) {    // use existing file
        std::cout << "success " << filename << " found. \n";
        std::cout << "\nAppending writing and working with existing file" << "\n---\n";
        std::cout << "\n";

    } else {
        std::cout << "Cannot open file, file does not exist. Creating new file..";
        appendFileToWorkWith->open(filename, std::fstream::in | std::fstream::out | std::fstream::trunc);
    }
    return std::unique_ptr<std::fstream>(appendFileToWorkWith);
}
