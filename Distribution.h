#ifndef DIS_H
#define DIS_H
#include "Source.h"

class Distribution{
    private:
    vector<Source>sources;
    public:
    void designate(int destination){
        if(destination>sources.size()-1){
            cerr<<"Require out of bound EXIT CODE -1."<<endl;
            return;
        }
        else{
            sources[destination].rename("Assigned");
        }
    }
};

#endif