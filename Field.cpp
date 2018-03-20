#include "Field.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;



Field::Field()
{
    type_ = GRASS;

}

Field::Field(FieldType type)
{
    type_ = type;
}

std::string Field::getName(FieldType type) const
{

switch (type)
    {

        case GRASS:

            return "Grass";

            break;


        case WATER:

            return "Water";

            break;

        case OBSTACLE:

            return "Obstacle";

            break;

        case STREET:

            return "Street";

            break;

        case HOME:

            return "Home";

            break;

        case MARKET:

            return "Market";

            break;

        case CLINIC:

            return "Clinic";

            break;

        case TOWNHALL:

            return "Town Hall";

            break;

        default:

            return "Unknown FieldType";

            break;

    }
}

Field::FieldType Field::getType()
{
    return type_;
}


