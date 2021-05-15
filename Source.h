#ifndef SOURCE_H
#define SOURCE_H

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Source{
    private:
    string name;
    vector<int>processors;
    public:
    void rename(string name){
        this->name=name;
    }
};

#endif