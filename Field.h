#ifndef FIELD_H_INCLUDED
#define FIELD_H_INCLUDED

#include <string>
#include <vector>
#include "Game.h"

class Field
{
    enum FieldType {GRASS, WATER, OBSTACLE, STREET, HOME, MARKET, CLINIC, TOWNHALL};

    private:

    FieldType type_;



    public:

    Field();
    Field(FieldType type);
    std::string getName(FieldType type) const;
    FieldType getType();
    ~Field();


};



#endif // FIELD_H_INCLUDED
