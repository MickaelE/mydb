//
// Created by Mickael Eriksson on 2020-04-08.
//

#ifndef MYDB_DATAFILE_H
#define MYDB_DATAFILE_H


#include <string>

class datafile {
public:
    datafile();
    std::unique_ptr<std::fstream> createFile(std::string &query);
private:
    void deleteFile(std::string &query);
};


#endif //MYDB_DATAFILE_H
