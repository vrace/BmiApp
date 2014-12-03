//
//  BmiProfile.h
//  BmiApp
//
//  Created by Liu Yang on 12/2/14.
//  Copyright (c) 2014 Liu Yang. All rights reserved.
//

#ifndef __BmiApp__BmiProfile__
#define __BmiApp__BmiProfile__

#include <string>
#include <iostream>

class BmiProfile
{
public:
    
    BmiProfile();
    BmiProfile(float weight, float height);
    
    void setWeight(float weight);
    void setHeight(float height);
    
    std::string summary() const;
    
protected:
    
    float bmi() const;
    
protected:
    
    float _weight;
    float _height;
};

std::istream& operator >> (std::istream &s, BmiProfile &profile);

#endif /* defined(__BmiApp__BmiProfile__) */
