//
//  BmiProfile.cpp
//  BmiApp
//
//  Created by Liu Yang on 12/2/14.
//  Copyright (c) 2014 Liu Yang. All rights reserved.
//

#include "BmiProfile.h"
#include <sstream>

namespace
{
    const float INDEX_UNDERWEIGHT = 18.0f;
    const float INDEX_OVERWEIGHT = 24.0f;
}

BmiProfile::BmiProfile()
: _weight(70.0f)
, _height(1.75f)
{
    
}

BmiProfile::BmiProfile(float weight, float height)
: _weight(weight)
, _height(height)
{
    
}

void BmiProfile::setWeight(float weight)
{
    _weight = weight;
}

void BmiProfile::setHeight(float height)
{
    _height = height;
}

float BmiProfile::bmi() const
{
    return _weight / (_height * _height);
}

std::string BmiProfile::summary() const
{
    float index = bmi();
    
    std::stringstream ss;
    
    ss << "Weight = " << _weight << ", ";
    ss << "Height = " << _height << ", ";
    ss << "BMI = " << index << ", ";
    
    if (index < INDEX_UNDERWEIGHT)
    {
        ss << "Underweight";
    }
    else if (index > INDEX_OVERWEIGHT)
    {
        ss << "Overweight";
    }
    else
    {
        ss << "Normal";
    }
    
    return ss.str();
}

std::istream& operator >> (std::istream &s, BmiProfile &profile)
{
    float w, h;
    s >> w >> h;
    profile.setWeight(w);
    profile.setHeight(h);
    return s;
}
