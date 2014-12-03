//
//  main.cpp
//  BmiApp
//
//  Created by Liu Yang on 12/2/14.
//  Copyright (c) 2014 Liu Yang. All rights reserved.
//

#include <iostream>
#include <vector>
#include "BmiProfile.h"

void loadInputs(std::vector<BmiProfile> &profiles)
{
    while (std::cin)
    {
        BmiProfile profile;
        std::cin >> profile;
        
        if (std::cin)
            profiles.push_back(profile);
    }
}

void showSummaries(const std::vector<BmiProfile> &profiles)
{
    for (const auto &profile : profiles)
    {
        std::cout << profile.summary() << std::endl;
    }
}

int main()
{
    std::cout << "Enter data (weight and height)" << std::endl;
    
    std::vector<BmiProfile> profiles;
    loadInputs(profiles);
    showSummaries(profiles);
    
    return 0;
}
